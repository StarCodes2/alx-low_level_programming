#include <stdio.h>
#include "3-calc.h"

/**
 * main - Uses function pointers to call that computes the sum, sub, mul,
 * div and mod of values passed to it as arguments
 * @argc: Contains the number of elements in the argument array
 * @argv: An array of pointers to the arguments
 *
 * Return: Returns 0 if successful
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*compute)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	compute = get_op_func(argv[2]);

	if (compute == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] != '/' || *argv[2] != '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n",  compute(num1, num2));

	return (0);
}
