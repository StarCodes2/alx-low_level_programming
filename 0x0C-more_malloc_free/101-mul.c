#include <stdlib.h>
#include "main.h"

/**
 * _prints - prints a string using _putchar()
 * @s: points to the string
 */

void _prints(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	_putchar('\n');
}

/**
 * len - counts the length of a string
 * @s: points to the string
 *
 * Return: returns the length of the string
 */

int len(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		_prints("Error");
		exit(98);
	}

	while (s[len])
	{
		if (s[len] < '0' || s[len] > '9')
		{
			_prints("Error");
			exit(98);
		}

		len++;
	}

	return (len);
}

/**
 * create_space - allocates a memory block and initialise it
 * @size: contains the size of memory to allocate
 *
 * Return: returns a pointer to the allocated memory
 */

char *create_space(int size)
{
	char *arr;
	int i;

	if (size <= 0)
	{
		_prints("Error");
		exit(98);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		_prints("Error");
		exit(98);
	}

	for (i = 0; i < (size - 1); i++)
		arr[i] = 'x';

	arr[i] = '\0';

	return (arr);
}

/**
 * _digit - converts a char to integer
 * @c: contains the char
 *
 * Return: returns a positive number if successful
 */

int _digit(char c)
{
	int num = 0;

	if (c >= '0' && c <= '9')
	{
		num = c - '0';
	}

	return (num);
}

/**
 * cut_zeros - move the pointer to start from a non-zero character
 * @s: points to the string
 *
 * Return: return a pointer to the first non-zero character in the string
 */

char *cut_zeros(char *s)
{
	while (*s == '0' && *s)
		s++;

	return (s);
}

/**
 * _mul - multiply two large positive number in strings
 * @s1: points to the first string in memory
 * @s2: points to the second string in memory
 * @prod: points to the memory allocated for the result
 * @len1: contains the first string's length
 * @len2: contains the second string's length
 */

void _mul(char *s1, char *s2, char *prod, int len1, int len2)
{
	int i, j, num1, num2, sum = 0, carry, i_s1 = 0, j_s2 = 0;

	for (i = (len1 - 1); i >= 0; i--)
	{
		carry = 0;
		j_s2 = 0;
		num1 = _digit(s1[i]);

		for (j = (len2 - 1); j >= 0; j--)
		{
			num2 = _digit(s2[j]);
			sum = (num1 * num2) + _digit(prod[i_s1 + j_s2]);
			carry = sum / 10;
			prod[i_s1 + j_s2] = (sum % 10) + '0';

			j_s2++;
		}

		if (carry > 0)
			prod[i_s1 + j_s2] = (_digit(prod[i_s1 + j_s2]) + carry) + '0';

		i_s1++;
	}
}

/**
 * main - multiples and prints the results of two possitive numbers
 * @argc: contain the number arguments intm the argv array
 * @argv: points to an array of arguments
 *
 * Return: return 0 if successful and 1 if it fails
 */

int main(int argc, char *argv[])
{
	char *s1, *s2, *prod;
	int len1, len2, i;

	if (argc != 3)
	{
		_prints("Error");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = cut_zeros(argv[1]);

	if (*(argv[2]) == '0')
		argv[2] = cut_zeros(argv[2]);

	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	s1 = argv[1];
	s2 = argv[2];
	len1 = len(s1);
	len2 = len(s2);

	prod = create_space(len1 + len2 + 1);
	_mul(s1, s2, prod, len1, len2);

	for (i = len1 + len2 - 1; i >= 0; i--)
	{
		if (prod[i] != 'x')
			_putchar(prod[i]);
	}

	_putchar('\n');
	free(prod);

	return (0);
}
