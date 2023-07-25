#include "main.h"

/**
 * rev_string - print the content of an array of characters in reverse
 * @s: contains the string
 */

void rev_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
