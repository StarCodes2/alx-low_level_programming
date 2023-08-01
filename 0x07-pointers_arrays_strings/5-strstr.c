#include "main.h"

/**
 * _strstr - Searches for a substring in a string
 * @haystack: Points to the string
 * @needle: points to the substring
 *
 * Return: returns a pointer to the beginning of the substring in the
 * string if found or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (haystack[i] != needle[i])
					break;
				else if (needle[i + 1] == '\0')
					return (haystack);
			}
		}

		haystack++;
	}

	return ('\0');
}
