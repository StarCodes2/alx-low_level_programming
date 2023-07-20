#include "main.h"

/**
 * _isdigit - checks if a character is a digit or not
 * @c: character to check
 *
 * Return: returns 1 if it's a digit and 0 if it's not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
