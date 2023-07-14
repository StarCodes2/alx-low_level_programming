#include <stdio.h>

/**
 * main - prints zero to nine seperated
 * with space and comma
 *
 * Return: returns zero
 */

int main(void)
{
	int i = 0;

	putchar('0' + i);

	while (i < 9)
	{
		i++;
		putchar(',');
		putchar(' ');
		putchar('0' + i);
	}

	return (0);
}
