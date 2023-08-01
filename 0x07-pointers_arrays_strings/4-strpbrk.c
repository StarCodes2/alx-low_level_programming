#include "main.h"

/**
 * _strpbrk - Search a string for the first occurrance of any of a set of byte
 * @s: points to the string
 * @accept: points to the set of bytes or characters
 *
 * Return: returns a pointer to the first occurrance of any of the bytes
 * or NULL if none exist
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
				return (s);
		}

		s++;
	}

	return ('\0');
}
