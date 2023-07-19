#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: returns zero
 */

int main(void)
{
	unsigned long a = 1, b = 2, sum;
	int i;

	printf("%d, %d", a, b);

	for (i = 0; i <= 48; i++)
	{
		sum = a + b;
		printf(", %d", sum);
		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}
