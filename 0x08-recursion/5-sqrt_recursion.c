#include "main.h"

/**
 * _sqrt - Checks for values that when when multiplied by itself equals to a
 * given integer
 * @n: contains the integer
 * @sqr: contains the value to be multiplied by itself
 *
 * Return: returns the value in sqr if when multiplied by itself it produce
 * the integer or -1 if no such value is found
 */

int _sqrt(int n, int sqr)
{
	int sqr2 = sqr;

	sqr2 *= sqr;

	if (sqr2 == n)
		return (sqr);

	if (sqr == n / 2)
		return (-1);

	return (_sqrt(n, sqr + 1));
}

/**
 * _sqrt_recursion - Fknd the square root of an integer
 * @n: contains the integer
 *
 * Return: returns the square root or -1 if the integer has no natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (_sqrt(n, 0));
}
