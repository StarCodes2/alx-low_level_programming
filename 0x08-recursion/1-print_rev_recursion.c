#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: points to the string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0' && s[1] != '\0')
	{
		_print_rev_recursion(s + 1);
	}

	if (*s != '\0')
		_putchar(*s);
}
