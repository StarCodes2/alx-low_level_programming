#include "main.h"

/**
 * _isupper - Tests if a character is uppercase or not
 * @c: Character to check
 *
 * Return: returns 1 if character is uppercase
 * and 0 its not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
