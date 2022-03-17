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
