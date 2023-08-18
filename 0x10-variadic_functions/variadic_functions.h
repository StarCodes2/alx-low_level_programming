#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct p_format - hold the types and address of the function use to print
 * arguments of that type
 * @sym: points to the types of argument that can be handled
 * @p: points to the function use to handle eaxh type of arguments
 */

typedef struct p_format
{
	char sym;
	void (*p)(va_list list);
} pf;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(va_list list);
void p_int(va_list list);
void p_float(va_list list);
void p_string(va_list list);

#endif
