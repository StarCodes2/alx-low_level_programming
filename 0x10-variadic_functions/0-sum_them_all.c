#include "variadic_functions.h"

/**
 * sum_them_all - sums all the its arguments
 * @n: contains the number of arguments passed to the function
 *
 * Return: returns the result or 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list p;
	int index, sum = 0;

	va_start(p, n);
	for (index = 0; index < n; index++)
		sum += va_arg(p, int);

	return (sum);
}
