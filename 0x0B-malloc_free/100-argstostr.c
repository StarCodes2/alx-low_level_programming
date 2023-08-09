#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates the arhuments all the arguments in a program
 * @ac: contains the numbers of arguments in the program
 * @av: points to the arguments
 *
 * Return: returns a pointer to the concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	int i, j, index = 0, size = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	size = size + ac + 1;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[index] = av[i][j];
			index++;
		}
		ptr[index++] = '\n';
	}

	return (ptr);
}
