#include "function_pointers.h"

/**
 * int_index - Search through an array for an integer
 * @array: points to the array
 * @size: contains the array size
 * @cmp: points to the compare function
 *
 * Return: return's the index where the integer is found in an array
 * or -1 if it fails or none is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
