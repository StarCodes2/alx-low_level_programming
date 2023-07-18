#include "main.h"

/**
 * print_last_digit - prints the last digit of a given value
 * @l: number to return its lst digit
 *
 * Return: return the digit of l
 */

int print_last_digit(int l)
{
	int ld = l % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');
	return (ld);
}
