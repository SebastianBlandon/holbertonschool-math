#ifndef _HERON_H_
#define _HERON_H_
#include <stdlib.h>
#include <ctype.h>

/**
 * struct s_cell - singly linked list
 * @elt: long float element
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct s_cell
{
	double elt;
	struct s_cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif /* _HERON_H_ */
