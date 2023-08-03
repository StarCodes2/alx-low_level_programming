#include "main.h"

/**
 * str_len - calculate the length of a string
 * @s: points to the string
 *
 * Return: returns the length of the string
 */

int str_len(char *s)
{
	if (*s != '\0')
		return (1 + str_len(s + 1));

	return (0);
}

/**
 * check_string - checks the string to confirm the characters to the
 * left matches the ones to the right
 * @s: points to the string
 * @start: starts from 0 and counts to the value in half
 * @half: contains half of the string length
 * @len: contains the strings length and it decreases with each recursion
 *
 * Return: returns the 1 if the character to the left matches the
 * ones to the right and 0 if not
 */

int check_string(char *s, int start, int half, int len)
{
	if (*s == s[len] && start <= half)
		return (check_string(s + 1, start + 1, half, len - 1));
	else if (*s != s[len] && start <= half)
		return (0);

	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: Points to the string
 *
 * Return: returns 1 if string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len, half_len;

	if (*s == '\0')
		return (1);
	else if (s[1] == '\0')
		return (1);

	len = str_len(s);

	if (len % 2 == 0)
		half_len = (len / 2) - 1;
	else
		half_len = len / 2;

	return (check_string(s, 0, half_len, len - 1));
}
