#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print the integer arguments
 * @separator: points to the string that will separate the numbers
 * @n: contains the number of undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int index;

	va_start(p, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(p, int));

		if (index < (n - 1) && separator != NULL)
			printf("%s", separaror);
	}

	va_end(p);

	printf("\n");
}
