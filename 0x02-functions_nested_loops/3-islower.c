#include "main.h"

/**
 * _islower - Checks if character c is lower case
 * @c: The charcter to be checked
 *
 * Return: returns 1 if character is lower case and 0 if its not
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
