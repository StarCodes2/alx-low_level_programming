#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: contains the address of the string in memory
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i) + '0');
	}

	_putchar('\n');
}
