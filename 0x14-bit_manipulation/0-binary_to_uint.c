#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: Points to a string of binary characters
 *
 * Return: returns the resulting int or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int bit = 1, num = 0;

	if (b == NULL || *b == '\0')
		return (0);

	for (i = 0; b[i]; i++)
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += bit * (b[i] - '0');
		bit *= 2;
	}

	return (num);
}
