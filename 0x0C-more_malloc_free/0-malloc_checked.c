#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * and check if it was successful
 * @b: contains the number of bytes of memory to be allpcated
 *
 * Return: returns the address of the memory if successful and
 * terminate the normal process
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
