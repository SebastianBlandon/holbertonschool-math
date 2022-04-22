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
	double result = 0, delta_x = ((b - a) / n), x_previous, x_present;

	x_previous = (a + (i * delta_x)), i++;
	while (i < steps)
	{
		x_present = (a + (i * delta_x));
		result += (1 / (1 + pow((x_previous + x_present) / 2, 2)));
		x_previous = x_present, i++;
	}
	result *= delta_x;
	return (result);
}
