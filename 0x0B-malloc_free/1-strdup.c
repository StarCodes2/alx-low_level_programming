#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create a new memory allocation and save the
 * duplicate of a given string there
 * @str: points to the string
 *
 * Return: returns a pointer to the duplicate or NULL if it fails
 */

char *_strdup(char *str)
{
	unsigned int i = 0, size = 0;
	char *dstr;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		size++;
		i++;
	}

	dstr = malloc(sizeof(char) * size + 1);

	if (dstr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dstr[i] = str[i];

	dstr[i] = '\0';

	return (dstr);
}
