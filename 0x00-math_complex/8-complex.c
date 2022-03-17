#include "holberton.h"

/**
 * complex_from_mod_arg - update the real and the imaginary parts of
 *  a complex number given its modulus and arguments.
 * @m: complex struct input.
 * @arg: complex struct input.
 * @c3: pointer complex struct input.
 * Return: nothing.
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * sqrt(1 / (1 + pow(tan(arg), 2)));
	c3->im = tan(arg) * c3->re;
}
