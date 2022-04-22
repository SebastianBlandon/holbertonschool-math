#include "rectangle.h"

/**
 * simpson - Simpson Method integrals.
 * @a: double input
 * @b: double input
 * @steps: int input
 * Return: result integral
 */
double simpson(double a, double b, int steps)
{
	double result = 0;
	int i = 1, n = steps;

	while (i < steps)
	{
		result += ((b - a) / n) * (1 / (1 + pow((a + (i * (b - a) / n)), 2)));
		i++;
	}
	return (result);
}
