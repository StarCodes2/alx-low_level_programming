#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: points to the string to encode
 *
 * Return: returns a pointer to the encoded string
 */

char *rot13(char *s)
{
	int index1, index2;
	char letters[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L',
			'M', 'N', 'O', 'P', 'Q', 'R',
			'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z', 'a', 'b', 'c', 'd',
			'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'n', 'o', 'p',
			'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z'};
	char rot13code[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			'T', 'U', 'V', 'W', 'X', 'Y',
			'Z', 'A', 'B', 'C', 'D', 'E',
			'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'n', 'o', 'p', 'q',
			'r', 's', 't', 'u', 'v', 'w',
			'x', 'y', 'z', 'a', 'b', 'c',
			'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm'};

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (s[index1] == letters[index2])
			{
				s[index1] = rot13code[index2];
				break;
			}
		}
	}

	return (s);
}
