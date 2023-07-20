#include "main.h"

/**
 * print_line - prints a line using underscore depending on a given number
 * @n: number that determines how many underscores to print
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
