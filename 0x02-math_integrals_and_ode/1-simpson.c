#include "simpson.h"

double x(double a, double delta_x, int i)
{
	return (a + i * delta_x);
}

double f(double x)
{
	return (1 / (1 + x * x));
}

/**
 * simpson - Simpson Method integrals.
 * @a: double input
 * @b: double input
 * @steps: int input
 * Return: result integral
 */
double simpson(double a, double b, int steps)
{
	int j, n = steps;
	double result = 0, delta_x = (b - a) / n;

	result += f(x(a, delta_x, 0));
	for(j = 1; j <= n / 2; j++)
	{
		result += 4 * f(x(a, delta_x, 2 * j - 1));
		result += 2 * f(x(a, delta_x, 2 * j));
	}
	result += f(x(a, delta_x, n));
	result *= delta_x / 3;
	return (result);
}
