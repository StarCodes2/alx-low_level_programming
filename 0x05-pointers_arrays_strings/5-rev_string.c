#include "main.h"

/**
 * rev_string - print the content of an array of characters in reverse
 * @s: contains the string
 */

void rev_string(char *s)
{
	int i = 0, count = 0, s2[];

	while (*(s + i) != '\0')
	{
		s2[i] = s[i];
		i++;
	}

	count = i - 1;
	i = 0;

	for (count; count >= 0; count--)
	{
		*(s + i) = s2[count];
		i++;
	}
}
