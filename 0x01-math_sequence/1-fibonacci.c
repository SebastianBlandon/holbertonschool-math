#include "fibonacci.h"

/**
 * gold_number - return the division of last two elements of list
 * @head: t_cell pointer input
 * Return: double
 */
double gold_number(t_cell *head)
{
	t_cell *aux = head;
	double last, secondToLast;

	last = aux->elt;
	aux = aux->next;
	secondToLast = aux->elt;
	return (last / secondToLast);
}
/**
 * *add_node_end - adds a new node at the end of a t_cell list.
 * @head: t_cell double pointer input
 * @num: double input
 * @to: double input
 * Return: the address of the new element, or NULL if it failed
 */
t_cell *add_node_end(t_cell **head, unsigned int num, double to)
{
	t_cell *new;
	unsigned int i, num_save = num;

	for (i = 0; i < to; i++)
	{
		new = malloc(sizeof(t_cell));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}

		if (!*head || !(*head)->next)
			new->elt = num;
		else
		{
			new->elt = num + num_save;
			num_save = num;
			num = new->elt;
		}
		new->next = *head;
		*head = new;
	}
	return (*head);
}
/**
 * *Fibonnaci - create the fibonacci serie
 * Return: Nothing
 */
t_cell *Fibonnaci()
{
	t_cell *head = NULL;

	return (add_node_end(&head, 1, 20));
}
