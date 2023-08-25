#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: points to the first elements of a list
 *
 * Return: returns the number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	if (h)
	{
		_putchar('[');
		print_num(h->len);
		_putchar(']');
		_putchar(' ');
		print_str(h->str);

		if (h->next)
			len = print_list(h->next);
	}
	else
	{
		return (0);
	}

	return (len + 1);
}

/**
 * print_str - prints a string
 * @s: points to the string
 */

void print_str(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
}

/**
 * print_num - prints integer
 * @len: contains the integer
 */

void print_num(unsigned int len)
{
	if (len > 9)
		print_num(len / 10);

	_putchar((len % 10) + '0');
}
