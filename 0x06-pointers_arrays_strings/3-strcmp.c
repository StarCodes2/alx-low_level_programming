#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: points to the location of the first string
 * @s2: points to the location of the second string
 *
 * Return: return a negative value if s1 < s2
 * 	zero if s1 = s2
 * 	and a positive value if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
