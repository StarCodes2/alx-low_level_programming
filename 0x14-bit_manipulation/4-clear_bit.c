#include "main.h"

/**
 * clear_bit - sets the bit of a number at a given index to 0
 * @n: points to the number
 * @index: contains the index value
 *
 * Return: return 1 if successful or -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index >= (sizeof(long int) * 8))
		return (-1);

	temp = *n >> index;

	if ((temp & 1) == 1)
		*n ^= 1 << index;

	return (1);
}
