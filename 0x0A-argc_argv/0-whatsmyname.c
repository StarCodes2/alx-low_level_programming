#include <stdio.h>

/**
 * main - prints the program name
 * @argc: contain the array's length
 * @argv: array of arguments
 *
 * Return: returns 0 if successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
