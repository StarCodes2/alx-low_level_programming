#include "main.h"

/**
 * print_triangle - Print a triangle of a particular size
 * @size: value determines the size of the triangle
 */

void print_triangle(int size)
{
	int i, a, b;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (a = i - 1; a > 0; a--)
			{
				_putchar(' ');
			}

			for (b = i - 1; b < size; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
