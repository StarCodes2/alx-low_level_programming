#include "main.h"

/**
 * main - prints the name of the current file
 *
 * Return: returns zero if successful
 */

int main(void)
{
	int i;
	char ptr = __FILE__;
	
	for (i = 0; ptr[i]; i++)
		_putchar(ptr[i]);

	_putchar('\n');

	return (0);
}
