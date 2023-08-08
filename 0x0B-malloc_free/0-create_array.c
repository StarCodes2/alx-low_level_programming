#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters and initialize it
 * @size: contains the size of the array
 * @c: contains the character use to initialize the chars
 *
 * Return: returns a pointer the start of the array if successful and
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
