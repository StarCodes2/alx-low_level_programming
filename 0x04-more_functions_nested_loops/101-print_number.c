#include "main.h"

/**
 * print_number - prints up to four digit numbers using _putchar.
 * @n: number to print
 */

void print_number(int n)
{
	unsigned int n2 = n;

	if (n < 0)
	{
		n2 = n2 * -1;

		_putchar('-');
	}

	if ((n2 / 10) > 0)
	{
		print_number(n2 / 10);
	}

	_putchar((n2 % 10) + '0');
}
