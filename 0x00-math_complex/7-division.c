#include "holberton.h"

/**
 * division - performs the division operation to complex numbers.
 * @c1: complex struct input.
 * @c2: complex struct input.
 * @c3: pointer complex struct input.
 * Return: nothing.
 */
void division(complex c1, complex c2, complex *c3)
{
	complex numerator;
	double denominator;

	numerator.re = (c1.re * c2.re) - (c1.im * -c2.im);
	numerator.im = (c1.re * -c2.im) + (c1.im * c2.re);
	denominator = (c2.re * c2.re) - (c2.im * -c2.im);
	c3->re = numerator.re / denominator;
	c3->im = numerator.im / denominator;
}
