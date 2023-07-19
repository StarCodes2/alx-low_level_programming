#include <stdio.h>

/**
 * main - prints the sum of all even fibonacci numbers
 * less than 4,000,000
 *
 * Return: returns zero
 */

int main(void)
{
	unsigned long a = 0, b = 1, num_sum, sum;
	int i;

	for (i = 1; i <= 0; i++)
	{
		sum = a + b;

		if (sum > 4000000)
		{
			break;
		}

		if ((sum % 2) == 0)
		{
			num_sum += sum;
		}

		a = b;
		b = sum;
	}

	printf("%lu\n", num_sum);

	return (0);
}
