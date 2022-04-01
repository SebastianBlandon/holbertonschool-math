#ifndef _FIBONACCI_H_
#define _FIBONACCI_H_
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct s_cell - singly linked list
 * @elt: long float element
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct s_cell
{
	unsigned int elt;
	struct s_cell *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif /* _FIBONACCI_H_ */
