#include "main.h"

/**
 * times_table - Prints the times table up to 9
 * starting from zero
 */

void times_table(void)
{
	int a, b, mul;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');

		for (b = 1; b < 10; b++)
		{
			mul = a * b;

			_putchar(',');
			_putchar(' ');

			if (mul <= 9)
			{
				_putchar(' ');
			}

			if (mul > 9)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else
			{
				_putchar(mul + '0');
			}
		}

		_putchar('\n');
	}
}
