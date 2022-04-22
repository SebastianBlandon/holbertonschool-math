#include <stdio.h>
#include "simpson.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main()
{
    float a = 0.0;
    float b = 1.0;
    int steps = 7;
    double simpon_integral;

    simpon_integral = simpson(a, b, steps);
    printf("The Simpson approximation of the Integral is: %.9f\n", simpon_integral);
    printf("The exact value is:                           %.9f\n", 3.1415926535 / 4);
	return (0);
}
