#include "main.h"

/**
 * _memcpy - copy's characters from memory location src to
 * dest
 * @dest: points to the memory location to copy the characters to
 * @src: points the memory location where the characters to be copied are
 * @n: contains the number of characters to be copied
 *
 * Return: returns a pointer to the destination location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
