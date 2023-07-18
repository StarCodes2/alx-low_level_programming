#include "main.h"

/**
 * print_sign - print + if value is greater than 0, 0 when its equal to 0, and - when its less than 0
 * @n: value to check
 *
 * Return: returns 1 if value is greater than 0, 0 when its equal to 0, and when its less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_purchar(0 + '0');
		return (0);
	}
	else
	{
		_purchar('-');
		return (-1);
	}
}
