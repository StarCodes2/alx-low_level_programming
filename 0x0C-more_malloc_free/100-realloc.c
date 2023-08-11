#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a block of memory using malloc and free
 * @ptr: points to the old memory block
 * @old_size: contains the size of the old memory block in byte
 * @new_size: contains the size of the new memory block in byte
 *
 * Return: return a pointer to the new memory block if success,
 *	NULL if it fails or new_size equals 0 and ptr equal NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_char, *new_char;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
	}
	else if (old_size > 0 && new_size > 0)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		old_char = ptr;
		new_char = new_ptr;

		for (i = 0; i < old_size && i < new_size; i++)
			new_char[i] = new_char[i];
		free(ptr);
	}

	return (new_ptr);
}
