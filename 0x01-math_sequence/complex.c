#include "holberton.h"

/**
 * modulus - returns the modulus of a given complex number.
 * @c: complex struct input.
 * Return: double value output.
 */
double modulus(complex c)
{
	return (sqrt(pow(c.re, 2) + pow(c.im, 2)));
}

/**
 * addition - performs the addition operation to complex numbers.
 * @c1: complex struct input.
 * @c2: complex struct input.
 * @c3: complex struct input.
 * Return: nothing.
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}

/**
 * multiplication - performs the multiplication operation to complex numbers.
 * @c1: complex struct input.
 * @c2: complex struct input.
 * @c3: complex struct input.
 * Return: nothing.
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
