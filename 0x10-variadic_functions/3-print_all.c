#include "variadic_functions.h"

/**
 * p_char - prints an argument of type char
 * @list: contains a list of arguments
 */

void p_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * p_int - prints an argument of type int
 * @list: contains a list of arguments
 */

void p_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * p_float - prints an argument of type float
 * @list: contains a list of arguments
 */

void p_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * p_string - prints a string argument
 * @list: contains a list of arguments
 */

void p_string(va_list list)
{
	char *s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print all arguments passed
 * @format: points to the format string
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	pf p[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_string}
	};

	va_start(list, format);
	i = 0;

	while (*(format + i))
	{
		j = 0;

		while (j < 4 && (*(format + i)))
		{
			if ((*(format + i)) == p[j].sym)
			{
				p[j].p(list);

				if ((*(format + (i + 1))) != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
