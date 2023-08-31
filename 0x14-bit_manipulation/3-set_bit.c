#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Points to an integer
 * @index: Contains the index of the bit to set
 *
 * Return: return 1 if successful and -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index >= (sizeof(long int) * 8))
		return (-1);

	temp = 1 << index;
	*n ^= temp;

	return (1);
}
