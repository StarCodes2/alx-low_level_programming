#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of numbers passedd as arguments to the program
 * @argc: contain the number of arguments
 * @argv: array of strings
 *
 * Return: returns 0 if successful
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
