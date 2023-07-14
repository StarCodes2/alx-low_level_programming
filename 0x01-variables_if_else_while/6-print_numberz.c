#include <stdio.h>

/**
 * main - prints digits with putchar
 *
 * Return: returns zero
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}

	putchar('\n');

	return (0);
}
