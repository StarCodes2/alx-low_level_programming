#include "main.h"

/**
 * get_endianness - Checks the endianness of the current system
 *
 * Return: return 1 for little endian anf 0 for big endian
 */

int get_endianness(void)
{
	unsigned int end = 1;
	char *s = (char *)&end;

	if (*s)
		return (1);
	else
		return (0);
}
