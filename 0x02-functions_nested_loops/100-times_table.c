#include "main.h"

/**
 * print_times_table - Prints the times table up to n
 * starting from zero
 * @n: the  number to print the times table to
 */

void print_times_table(int n)
{
	int a, b, c, mul;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				mul = a * b;

				_putchar(',');
				_putchar(' ');

				if (mul <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if (mul > 9 && mul < 100)
				{
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if (mul > 99 && mul < 1000)
				{
					c = mul / 10;
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}

			_putchar('\n');
		}
	}
}
