#include "main.h"

/**
 * rev_string - print the content of an array of characters in reverse
 * @s: contains the string
 */

void rev_string(char *s)
{
	int i = 0, count = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	count = i - 1;
	i = 0;
	char s2;

	while (i <= count)
	{
		*(s2 + i) = *(s + i);
		i++;
	}

	i = 0;

	for (count = count; count >= 0; count--)
	{
		*(s + i) = *(s2 + count);
		i++;
	}
}
