#include "main.h"

/**
 * _memset - Fill the memory with a constant byte
 * @s: points to the array or memory location to fill
 * @b: contains the character to fill the memory with
 * @n: contains the number of memory locations to fill
 *
 * Return: returns a pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
