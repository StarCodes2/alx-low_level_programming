#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array and initialize it
 * @nmemb: contains the number of elements the area would contain
 * @size: contains the size of each elements in the array
 *
 * Return: returns a pointer the allocated memory, NULL if it fails
 * NULL if nmemb or size equals zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, m_size;
	void *arr;
	char c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m_size = nmemb * size;

	arr = malloc(m_size);

	if (arr == NULL)
		return (NULL);

	c = arr;

	for (i = 0; i < m_size; i++)
	{
		arr[i] = '\0';
	}

	return (arr);
}
