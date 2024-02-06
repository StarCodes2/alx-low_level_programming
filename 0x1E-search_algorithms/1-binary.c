#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using the
 *		   Binary search algorithm
 * @array: Points the first element in the array
 * @size: Contains the size of the array
 * @value: Contains the value to search for
 *
 * Return: index of the matched element or -1 if array is NULL/no match found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t right, left, middle, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
			printf(" %d", array[i]);
		if (i < right)
			printf(",");
		else
			printf("\n");

		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
