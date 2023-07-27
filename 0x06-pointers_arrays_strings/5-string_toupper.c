#include "main.h"

/**
 * string_toupper - converts all lower case characters of a string to upperCase
 * @s: points to the string
 *
 * Return: returns a pointer to the capitalised string
 */

char *string_toupper(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;
	}

	return (s);
}
