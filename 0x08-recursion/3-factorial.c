#include "main.h"

/**
 * factorial - Calculate the factorial of an integer
 * @n: contains the integer
 *
 * Return: returns the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
