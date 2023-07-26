#include "main.h"

/**
 * puts_half - prints half of a given string
 * @str: contains the string
 */

void puts_half(char *str)
{
	int half_len, index, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if ((len % 2) != 0)
		half_len = (len - 1) / 2;
	else
		half_len = len / 2;

	for (index = 0; index < half_len; index++)
	{
		_putchar(str[imdex]);
	}

	_putchar('\0');
}
