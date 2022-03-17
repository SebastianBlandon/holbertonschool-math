#include "holberton.h"

/**
 * argument - returns the argument of a given complex number.
 * @c: complex struct input.
 * Return: double value output.
 */
double argument(complex c)
{
	return (atan(c.im / c.re));
}
