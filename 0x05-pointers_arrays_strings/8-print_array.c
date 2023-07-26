#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of an array integers of gjven length
 * @a: contains the array
 * @n: contains the length of the array
 */

void print_array(int *a, int n)
{
	int index;

	n--;

	for (index = 0; i <= n; index++)
	{
		printf("%d", a[index]);

		if (index < n)
			printf(", ");
	}

	printf("\n");
}
