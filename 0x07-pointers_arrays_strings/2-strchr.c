#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: points to the string
 * @c: contains the character
 *
 * Return: returns a pointer to the first occurrance of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
