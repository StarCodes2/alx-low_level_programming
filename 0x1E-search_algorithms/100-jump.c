#include <math.h>
#include "search_algos.h"

/**
 * min - Checks for the smallest of two integers
 * @a: Contains the first integer
 * @b: Contains the second integer
 *
 * Return: the smallest integer or the content of a if both are equal
 */

size_t min(size_t a, size_t b)
{
	if (b >= a)
		return (a);
	else
		return (b);
}

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 *		 Jump search algorithm
 * @array: Points the first element in an array of integers
 * @size: Contains the size of the array
 * @value: Contains the integer to search for in the array
 *
 * Return: the index of the value if found in the array or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0;

	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (step >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		prev++;
		if (prev == min(step, size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);
	
	return (-1);
}
