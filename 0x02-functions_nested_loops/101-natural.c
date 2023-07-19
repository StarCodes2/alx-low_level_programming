#include <stdio.h>

/**
 * main - print the sum of numbers divisible by 3
 * and 5 within a given range
 *
 * Return: returns zero
 */

int main(void)
{
	int i = 0, sum;

	while (i < 1024)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{
			sum += i;
		}

		i++;
	}

	printf("%d\n", sum);

	return (0);
}
