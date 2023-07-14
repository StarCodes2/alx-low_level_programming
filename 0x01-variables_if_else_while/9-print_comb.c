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

	while (i < 10)
	{
		if (i != 0)
		{
			putchar(',');
			putchar(' ');
		}

		putchar('0' + i);
		i++;
	}

	putchar('\n');

	return (0);
}
