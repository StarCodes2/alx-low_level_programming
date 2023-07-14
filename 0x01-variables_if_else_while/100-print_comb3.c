#include <stdio.h>

/**
 * main - Prints possible combinations of two different digit
 * seperated with  comma and spaace
 *
 * Return: returns zero
 */

int main(void)
{
	int a, b;

	for (a = 0; a  < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 8 && b == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
