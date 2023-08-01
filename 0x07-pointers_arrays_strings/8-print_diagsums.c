#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 * @a: points to the square matrix
 * @size: contains the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, fsum = 0, ssum = 0;

	for (i = 0; i < size; i++)
	{
		fsum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		ssum += a[i];
		a -= size;
	}

	printf("%d, %d\n", fsum, ssum);
}
