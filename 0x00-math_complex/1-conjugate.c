#include "holberton.h"

/**
 * conjugate - returns the conjugate of a given complex number.
 * @c: complex struct input.
 * Return: complex struct output.
 */
complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
