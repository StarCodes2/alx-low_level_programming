#include <stdio.h>

/**
 * prime_test - checks if a number is a prime number
 * @num: number to check
 *
 * Return: returns the count of numbers that can divide the number
 */

long prime_test(long num)
{
	long test, count = 0;

	for (test = 1; test <= num; test++)
	{
		if ((num % test) == 0)
		{
			count += 1;
		}
	}

	return (count);
}

/**
 * main - prints the highest prime factor of a number
 *
 * Return: return zero
 */

int main(void)
{
	long div, num = 612852475143, high_prime = 0;

	for (div = 2; div <= num; div += 2)
	{
		if (div == 4)
		{
			div--;
		}

		if (prime_test(div) > 2)
		{
			continue;
		}

		while ((num % div) == 0)
		{
			num /= div;

			if (high_prime < div)
			{
				high_prime = div;
			}
		}
	}

	printf("%ld\n", high_prime);

	return (0);
}
