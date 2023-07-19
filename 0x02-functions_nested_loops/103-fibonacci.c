#include <stdio.h>

/**
 * main - prints the sum of all even fibonacci numbers
 * less than 4,000,000
 *
 * Return: returns zero
 */

int main(void)
{
	unsigned long a = 0, b = 1, i, sum;
	float num_sum;

	for (i = 1; i == 0; i++)
	{
		sum = a + b;

		if ((sum % 2) == 0 && sum < 4000000)
		{
			num_sum += sum;
		}

		if (sum >= 4000000)
		{
			i = 0;
		}

		a = b;
		b = sum;
	}

	printf("%.0f\n", num_sum);

	return (0);
}
