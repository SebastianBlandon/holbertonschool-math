#include "simpson.h"

double x(double a, double delta_x, int i)
{
	return (a + i * delta_x);
}

double f(double x)
{
	return (1 / (1 + x));
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
	double zero = 0, two = 0, four = 0, ene = 0;

	zero += f(x(a, delta_x, 0));
	for(j = 1; j < n - 1; j++)
		two += f(x(a, delta_x, 2 * j));
	two *= 2;
	for (j = 1; j < n; j++)
		four += f(x(a, delta_x, 2 * j - 1));
	four *= 4;
	ene += f(x(a, delta_x, n));
	result = zero + two + four + ene;
	result *= delta_x / 3;
	return (result);
}
