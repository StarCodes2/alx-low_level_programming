#include "variadic_functions.h"

/**
 * print_numbers - print the integer arguments
 * @separator: points to the string that will separate the numbers
 * @n: contains the number of undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list m;
	unsigned int index;

	va_start(m, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(m, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(m);

	printf("\n");
}
