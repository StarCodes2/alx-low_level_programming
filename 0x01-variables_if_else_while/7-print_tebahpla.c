#include <stdio.h>

/**
 * main - print the alphabelts in reverse
 *
 * Return: returns zero
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}
