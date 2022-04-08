#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
/**
 * struct num_complex - Struct complex numbers
 *
 * @re: The operator
 * @im: The function associated
 */
typedef struct num_complex
{
	double re;
	double im;
} complex;

double modulus(complex c);
void addition(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);

#endif /* HOLBERTON_H_ */
