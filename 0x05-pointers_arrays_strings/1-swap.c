#include "main.h"

/**
 * swap_int - Swaps the values in two memory locations
 * @a: contains first memory address
 * @b: contains second memory address
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
