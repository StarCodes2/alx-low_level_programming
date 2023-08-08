#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concat two strings and result in a newly allocated
 * memory space
 * @s1: points to the first string
 * @s2: points to the second string
 *
 * Return: returns a pointer to the allocated memory and NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int j, i = 0, size = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		size++;
		i++;
	}

	i = 0;

	while (s2[i])
	{
		size++;
		i++;
	}

	i = 0;
	s3 = malloc(sizeof(char) * size + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];


	for (j = 0; s2[j]; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';

	return (s3);
}
