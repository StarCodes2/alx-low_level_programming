#include "main.h"

/**
 * _strcat - Concat two strings
 * @dest: pointer to the first character of the first string
 * @src: pointer to the first character of the second string
 *
 * Return: returns a pointer to the first character of the new string in dest
 */

char *_strcat(char *dest, char *src)
{
	int index, index2 = 0, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (index = len; src[index2] != '\0'; index++)
	{
		dest[index] = src[index2];
		index2++;
	}

	return (dest);
}
