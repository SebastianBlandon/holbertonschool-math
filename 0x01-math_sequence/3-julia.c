#include "holberton.h"
#include <stdio.h>

/**
 * JuliaSet - The Julia set is the set of complex numbers c
 * @name: FILE pointer input
 * @name1: name of FILE
 * @c: complex number input
 * @xmax: number max in axis x
 * @ymax: number max in axis y
 * Return: Always 0
 */
void JuliaSet(FILE *name, char name1[20], complex c, int xmax, int ymax)
{
	int i, x, y, **image, MAXCOUNT = 255;
	complex z;

	image = malloc(ymax * sizeof(int));
	if (!image)
	{
		free(image);
		return;
	}
	for (y = 0; y < ymax; y++)
	{
		image[y] = malloc(xmax * sizeof(int));
		if (!image[y])
		{
			for (y--; y >= 0; y--)
				free(image[y]);
			return;
		}
		for (x = 0; x < xmax; x++)
		{
			z.re = -2 + x * 0.004, z.im = -2 + y * 0.004, i = 0;
			while ((modulus(z) < 2) && (i < MAXCOUNT))
			{
				multiplication(z, z, &z), addition(z, c, &z), i++;
			} image[y][x] = i;
		}
	}
	name = fopen(name1, "wb"), fprintf(name, "P2\n");
	fprintf(name, "%d %d\n", xmax, ymax), fprintf(name, "255\n");
	for (x = 0; x < xmax; x++)
	{
		for (y = 0; y < ymax; y++)
			fprintf(name, "%d ", image[x][y]); /*Copy gray value from array to file*/
		fprintf(name, "\n");
	}
	for (y--; y >= 0; y--)
		free(image[y]);
	free(image), fclose(name);
}

/**
 * main - main function
 * Return: 0 Always
 */
int main(void)
{
	FILE *pgmimg = NULL;
	complex c;

	c.re = -0.625, c.im = 0.4, pgmimg = NULL;
	JuliaSet(pgmimg, "julia1.pgm", c, 1000, 1000);
	c.re = 0.285, c.im = 0, pgmimg = NULL;
	JuliaSet(pgmimg, "julia2.pgm", c, 1000, 1000);
	c.re = 0.285, c.im = 0.01, pgmimg = NULL;
	JuliaSet(pgmimg, "julia3.pgm", c, 1000, 1000);
	c.re = -0.7269, c.im = 0.1889, pgmimg = NULL;
	JuliaSet(pgmimg, "julia4.pgm", c, 1000, 1000);
	c.re = -0.835, c.im = 0.2321, pgmimg = NULL;
	JuliaSet(pgmimg, "julia5.pgm", c, 1000, 1000);
	c.re = -0.70176, c.im = -0.3842, pgmimg = NULL;
	JuliaSet(pgmimg, "julia6.pgm", c, 1000, 1000);
	return (0);
}
