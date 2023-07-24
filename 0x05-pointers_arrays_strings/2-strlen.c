#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: contains the memory location of a string
 *
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int i = 0, count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
