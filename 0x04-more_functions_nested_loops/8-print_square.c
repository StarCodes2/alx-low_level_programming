#include "main.h"

/**
 * print_square - prints a square using the hash sign
 * and a number to determine its size
 * @size: number that determnes the size of the square
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
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
