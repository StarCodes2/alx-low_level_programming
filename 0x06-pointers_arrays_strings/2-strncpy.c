#inclide "include"

/**
 * _strncpy - copy n characters of the string pointed to by src to dest
 * and if src < n, then the remainder of the space in dest is fill with
 * '\0' characters. otherwise dest is not terminated.
 * @dest: points to the destination location in memory.
 * @src: points to the location of the string to copy in memory.
 * @n: contains the number of characters to copy
 *
 * Return: returns dest whcih is the pointer to the copied sting in memory
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;

		dest[i] = src[i];
	}

	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
