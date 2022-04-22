#include <stdio.h>
#include "rectangle.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main()
{
    float a = 0.0;
    float b = 1.0;
    int steps = 1000000;
    double rectangle_integral;

    rectangle_integral = rectangle_method(a, b, steps);
    printf("The Rectangle approximation of the Integral is : %.9f\n", rectangle_integral);
}
