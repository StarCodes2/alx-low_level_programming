#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: contains string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i] + '0');
	}

	_putchar('\n');
}
