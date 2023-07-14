#include <stdio.h>

/**
 * main - print hex with putchar
 *
 * Return: returns zero
 */

int main(void)
{
	int i = 0;
	char a = 'a';

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
