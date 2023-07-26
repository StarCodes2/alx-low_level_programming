#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src with \0 character to
 * the buffer pointed to by dest
 * @dest: contains the buffer's address
 * @src: contains the pointer to the string
 *
 * Return: returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index, len = 0;

	while (src[len] != '\0')
		len++;

	for (index = 0; index < len; index++)
		dest[index] = src[index];

	dest[len] = '\0';

	return (dest);
}
