#include "rectangle.h"

/**
 * rectangle_method - Rectangle Method integrals.
 * @a: double input
 * @b: double input
 * @steps: int input
 * Return: result integral
 */
double rectangle_method(double a, double b, int steps)
{
	int i = 0, n = steps + 1;
	double result = 0, delta_x = ((b - a) / n), x_previous, x_present, x_i;

	x_previous = (a + (i * delta_x)), i++;
	while (i <= n)
	{
		x_present = (a + (i * delta_x));
		x_i = (x_previous + x_present) / 2;
		result += (1 / (1 + (x_i * x_i)));
		x_previous = x_present, i++;
	}
	result *= delta_x;
	return (result);
}
