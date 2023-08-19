#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcode of itself
 * @argc: contains the number of arguments in the argv array
 * @argv: an array of pointers to the string arguments
 *
 * Return: returns 0 if successful
 */

int main(int argc, char *argv[])
{
	int (*addr)(int, char **);
	int i, byte;
	unsigned char opcode;
	char *s = "";

	addr = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;

	while (i < byte)
	{
		opcode = *(unsigned char *)(addr + i);
		printf("%s", s);
		printf("%.2x", opcode);
		s = " ";

		i++;
	}
	printf("\n");

	return (0);
}
