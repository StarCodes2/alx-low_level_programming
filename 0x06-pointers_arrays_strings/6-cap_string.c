#include "main.h"

/**
 * cap_string - Capitalise each word in a string
 * @s: points to the string
 *
 * Return: returns a pointer to the capitalised string
 */

char *cap_string(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			if (s[index - 1] == ' ' ||
			s[index - 1] == '\t' ||
			s[index - 1] == '\n' ||
			s[index - 1] == ',' ||
			s[index - 1] == ';' ||
			s[index - 1] == '.' ||
			s[index - 1] == '!' ||
			s[index - 1] == '?' ||
			s[index - 1] == '"' ||
			s[index - 1] == '(' ||
			s[index - 1] == ')' ||
			s[index - 1] == '{' ||
			s[index - 1] == '}' ||
			index == 0)
			{
				s[index] -= 32;
			}
		}
	}

	return (s);
}
