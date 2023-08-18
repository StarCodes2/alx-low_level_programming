#include "variadic_functions.h"

/**
 * print_strings - prints string arguments
 * @separator: points to hhe string that separates the output
 * @n: contains the number of all umdefined arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	va_end(str);
	printf("\n");
}
