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
	int i = 0, n = steps;
	double result = 0, delta_x = ((b - a) / n), x_i;

	while (i < n)
	{
		x_i = a + i * delta_x;
		result += (1 / (1 + (x_i * x_i)));
		i++;
	}
	result *= delta_x;
	return (result);
}
