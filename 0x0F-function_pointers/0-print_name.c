#include "function_pointers.h"

/**
 * print_name - Calls a function using a pointer and pass it a string
 * @name: points to a string
 * @f: points to a function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
