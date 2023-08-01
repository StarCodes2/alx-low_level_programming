#include "main.h"

/**
 * _strspn - Counts the number of times a set of charactets appear in a string
 * @s: points to the string in memory
 * @accept: points to the characters
 *
 * Return: returns the number of bytes in the string that contains
 * the same characters as accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, bytes = 0;

	while (*s)
	{
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (bytes);
			}
		}

		s++;
	}

	return (bytes);
}
