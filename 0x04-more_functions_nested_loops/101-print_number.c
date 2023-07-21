#include "main.h"

/**
 * print_number - prints up to four digit numbers using _putchar.
 * @n: number to print
 */

void print_number(int n)
{
	int h, t;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n > 99)
	{
		h = n / 10;

		if (n > 999)
		{
			t = h / 10;
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
		}

		_putchar((h % 10) + '0');
	}

	_putchar((n % 10) + '0');
}
