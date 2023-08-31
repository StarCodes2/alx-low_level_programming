#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Contains the number
 * @index: Holds the index value
 *
 * Return: returns the value of the bit or -1 if it failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index >= (sizeof(long int) * 8))
		return (-1);

	bit = n >> index;

	return ((int) bit & 1);
}
