#include <stdio.h>

/**
 * main - prints the alphabelt
 *
 * Return: return zero
 */

int main(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');

	return (0);
}
