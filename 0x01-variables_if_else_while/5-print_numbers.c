#include <stdio.h>

/**
 * main - prints zero to nine
 *
 * Return: returns zero
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	putchar('\n');

	return (0);
}
