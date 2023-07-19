#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: returns zero
 */

int main(void)
{
	unsigned long a = 1, b = 2, sum;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 0; i < 46; i++)
	{
		sum = a + b;
		printf(", %lu", sum);
		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}
