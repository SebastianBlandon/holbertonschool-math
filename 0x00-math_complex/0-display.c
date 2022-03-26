#include "holberton.h"

/**
 * print_double - print of double value
 * @b: double input.
 * Return: nothing.
 */
void print_double(double b)
{
	double f = 10, parte_d_b = b * f;

	printf("%d", (int)b);
	if ((int)parte_d_b % 10 != 0)
	{
		printf(".");
	}
	while ((int)parte_d_b % 10 != 0)
	{
		printf("%d", (int)parte_d_b % 10);
		parte_d_b = parte_d_b * f;
	}
}
/**
 * display_complex_number - displays the complex numbers,
 *  followed by a new line.
 * @c: complex struct input.
 * Return: nothing.
 */
void display_complex_number(complex c)
{
	print_double(c.re);
	if (c.im != 0)
	{
		if (c.im < 0)
		{
			printf(" - ");
			c.im *= -1;
		}
		else
			printf(" + ");
		if (c.im != 1)
			print_double(c.im);
		printf("i");
	}
	printf("\n");
}
