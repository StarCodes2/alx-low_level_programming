#include <stdio.h>

void __attribute__((constructor)) first_p(void);

/**
 * first_p - print a string before main excute
 */

void first_p(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
