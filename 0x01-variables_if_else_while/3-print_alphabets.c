#include <stdio.h>

/**
 * main - prints lower and upper case alphabelts
 *
 * Return: returns zero
 */

int main(void)
{
	char i = 'a';
	char a = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
