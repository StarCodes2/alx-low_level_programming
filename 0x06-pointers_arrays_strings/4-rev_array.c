#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: points to the array
 * @n: contains the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int index, tmp;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - index - 1] = a[index];
		a[index] = tmp;
	}
}
