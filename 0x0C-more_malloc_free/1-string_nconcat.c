#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concat n characters of string s2 to s1 and save
 * the new string in a newly allocated memory space
 * @s1: points to the first string
 * @s2: points to the second string
 * @n: contains the number of characters of s2 to concat with s2
 *
 * Return: returns a pointer to the new string or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, index, index2;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len1++;

	for (index = 0; s2[index]; index++)
		len2++;

	if (n < len2)
		len2 = n;
	else
		n = len2;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		s3[index] = s1[index];

	for (index2 = 0; index2 < n; index2++)
		s3[index++] = s2[index2];

	return (s3);
}
