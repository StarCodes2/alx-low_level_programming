#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers that hold values from min to max
 * @min: contains the first value
 * @max: contains the last value
 *
 * Return: returns a pointer to the new array or NULL if min > max or fails
 */

int *array_range(int min, int max)
{
	int len, i;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
