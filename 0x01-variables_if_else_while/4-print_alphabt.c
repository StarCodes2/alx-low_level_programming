#include <stdio.h>

/**
 * main - prints alphabelts in lowercase
 * excluding q and e
 *
 * Return: returns zero
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}

	putchar('\n');

	return (0);
}
