#include "search_algos.h"

/**
 * linear_search - Search for a value in a given array using the linear search
 *		   algorithm
 * @array: Points to the first element in the array
 * @size: Contains the size/length of the array
 * @value: Contains the value to search for in the array
 *
 * Return: index of the matched element or -1 if array is NULL/no match found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i,
					array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
