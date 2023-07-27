#include "main.h"

/**
 * leet - encodes string to 1337
 * @s: points to the string
 *
 * Return: returns a pointer to the encoded string
 */

char *leet(char *s)
{
	int index1, index2;
	char code[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (s[index1] == code[index2] ||
			s[index1] - 32 == code[index2])
			{
				s[index1] = index2 + '0';
			}
		}
	}

	return (s);
}
