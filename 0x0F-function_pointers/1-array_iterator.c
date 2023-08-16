#include "function_pointers.h"

/**
 * array_iterator - executes a function for each members of any array
 * @array: points to the array
 * @size: sizw of the array
 * @action: point to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	
	if (array == NULL || action = NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
