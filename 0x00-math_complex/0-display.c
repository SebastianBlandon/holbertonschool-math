#include "holberton.h"

/**
 * display_complex_number - displays the complex numbers, followed by a new line.
 * @c: complex struct input.
 * 
 * Return: nothing.
 */
void display_complex_number(complex c)
{
	
	printf("%.0f ", c.re);
	if (c.im != 0)
    {
        if (c.im < 0)
	    {
	    	printf("- ");
	    	c.im *= - 1;
	    }
	    else
	    	printf("+ ");
	    printf("%.0f", c.im);
        printf("i");
    }
    printf("\n");
}
