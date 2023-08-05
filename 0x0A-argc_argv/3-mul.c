#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two number passed as arguments to the program
 * @argc: contain the number of arguments
 * @argv: array of strings
 *
 * Return: returns 0 if successful
 */

int main(int argc, char *argv[])
{
	int num, num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num * num2);

	return (0);
}
