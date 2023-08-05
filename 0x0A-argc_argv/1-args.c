#include <stdio.h>

/**
 * main - prints the number of arguments pass to the program
 * @argc: contain the number of arguments
 * @argv: array of strings
 *
 * Return: returns 0 if successful
 */

int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);

	return (0);
}
