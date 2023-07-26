#include "main.h"

/**
 * _strncat - Concat the n characters of the second strings to the first
 * @dest: pointer to the first character of the first string
 * @src: pointer to the first character of the second string
 * @n: contains the number of characters of the second string
 * to add to the first string
 *
 * Return: returns a pointer to the first character of the new string in dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, index2 = 0, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (index = len; index < (n + len); index++)
	{
		if (src[index2] == '\0')
			break;

		dest[index] = src[index2];
		index2++;
	}

	return (dest);
}
