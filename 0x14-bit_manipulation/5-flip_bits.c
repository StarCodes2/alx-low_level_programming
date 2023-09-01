#include "main.h"

/**
 * flip_bits - Counts the number of bit to flip to get from one number to
 * another
 * @n: Contains the first number
 * @m: Contains the second number
 *
 * Return: return the number of bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff, copy;

	diff = n ^ m;

	while (diff)
	{
		copy = diff & 1;
		if (copy == 1)
			count++;

		diff = diff >> 1;
	}

	return (count);
}
