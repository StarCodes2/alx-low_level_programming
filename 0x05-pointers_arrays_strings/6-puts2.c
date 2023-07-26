#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: contains string
 */

void puts2(char *str)
{
	int i, n = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		n = i - 1;

		if (i > 0 && str[n] == '\0')
		{
			break;
		}

		_putchar(str[i]);
	}

	_putchar('\n');
}
