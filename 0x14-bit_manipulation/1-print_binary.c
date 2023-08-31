#include "main.h"

/**
 * print_binary - Prints the binary representation of an integer
 * @n: contains the integer
 */

void print_binary(unsigned long int n)
{
	unsigned int copy = n;

	copy >> 1;
	if (copy)
		print_binary(copy);

	_putchar((n & 1) + '0');
}
