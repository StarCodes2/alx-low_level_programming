#include <stdio.h>

/**
 * main - prints all the arguments pass to the program
 * @argc: contain the number of arguments
 * @argv: array of strings
 *
 * Return: returns 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i];

	return (0);
}
