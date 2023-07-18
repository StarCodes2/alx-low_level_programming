#include "main.h"

/**
 * _isalpha - Checks if character is a letter
 * @c: character to be checked
 *
 * Return: returns 1 if its a letter and 0 if its not a letter
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
