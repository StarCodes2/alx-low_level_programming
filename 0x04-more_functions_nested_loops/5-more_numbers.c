#include "main.h"

/**
 * more_numbers - prints 0 to 14 using _putchar
 */

void more_numbers(void)
{
	int i, a = 0;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
		}

		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
