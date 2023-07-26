#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: contains the string
 *
 * Return: returns the converted string as integer
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1, i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			sign *= -1;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
			num = (num * 10) + (*(s + i) - '0');
		else if (num > 0)
			break;

		i++;
	}

	return (num * sign);
}
