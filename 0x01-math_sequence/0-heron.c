#include "heron.h"

/**
 * _sqrt - returns the natural square root of a number.
 * @n: int variable input
 * Return: int value output
 */
double _sqrt(double n)
{
	double root = n / 2, tmp = 0;

	while (root != tmp)
	{
		tmp = root;
		root = (n / tmp + tmp) / 2;
	}

	return (root);
}
/**
 * _round - find the fake round for two doblue match
 * @elt: double input
 * @sqrtP: double input
 * @error: int input
 * Return: 1 if match doubles with error less that 10^-7
 *  else 0.
 */
int _round(double elt, double sqrtP, int error)
{
	int i;

	for (i = 0; i < error; i++)
	{
		if ((int) elt % 10 != (int) sqrtP % 10)
			return (0);
		elt *= 10, sqrtP *= 10;
	}

	return (1);
}
/**
 * *add_node_end - adds a new node at the end of a t_cell list.
 * @head: t_cell double pointer input
 * @p: double input
 * @x0: double input
 * Return: the address of the new element, or NULL if it failed
 */
t_cell *add_node_end(t_cell **head, double p, double x0)
{
	t_cell *new;

	new = malloc(sizeof(t_cell));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (!*head)
		new->elt = x0;
	else
		new->elt = (0.5) * (x0 + (p / (float) x0));

	new->next = *head;
	*head = new;

	if (!_round(new->elt, _sqrt(p), 7))
		add_node_end(head, p, new->elt);
	return (*head);
}
/**
 * *heron - adds a new node at the beginning of a t_cell list.
 * @p: double input
 * @x0: double input
 * Return: the address of the new element, or NULL if it failed
 */
t_cell *heron(double p, double x0)
{
	t_cell *head = NULL;

	return (add_node_end(&head, p, x0));
}
