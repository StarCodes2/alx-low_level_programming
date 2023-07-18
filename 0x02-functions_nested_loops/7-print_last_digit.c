#include "main.h"

/**
 * print_last_digit - prints the last digit of a given value
 * @l: number to return its lst digit
 *
 * Return: return the digit of l
 */

int print_last_digit(int l)
{
	_putchar((l % 10) + '0');
	return (l % 10);
}
