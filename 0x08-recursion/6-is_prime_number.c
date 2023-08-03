#include "main.h"

/**
 * prime_checker - Counts how many numbers can divid an integer
 * @n: contains the integer
 * @div: contain the divisor
 *
 * Return: returns the count of the amonut of numbers that can divide
 * the integer
 */

int prime_checker(int n, int div)
{
	if (n != div)
	{
		if (n % div == 0)
			return (1 + prime_checker(n, div + 1));
		else
			return (0 + prime_checker(n, div + 1));
	}

	return (1);
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: contains the number to check
 *
 * Return: returns 1 if the integer is a prime number and 0 if its not
 */

int is_prime_number(int n)
{
	int result = 0;

	if (n < 2)
		return (0);

	result = prime_checker(n, 1);

	if (result > 2)
		result = 0;
	else if (result == 2)
		result = 1;

	return (result);
}
