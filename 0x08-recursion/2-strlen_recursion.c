#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string
 * @s: points to the string
 *
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
		i = 1 + _strlen_recursion(s + 1);

	return (i);
}
