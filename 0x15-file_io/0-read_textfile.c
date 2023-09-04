#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Points to the name of the of the file
 * @letters: Contains the number of characters to be read and printed
 *
 * Return: returns the actual number of characters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, rlen, wlen;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rlen = read(fd, buffer, letters);
	if (fd == -1 || rlen == -1)
	{
		free(buffer);
		return (0);
	}

	wlen = write(STDOUT_FILENO, buffer, rlen);
	if (wlen == -1 || rlen != wlen)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buufer);
	close(fd);

	return (wlen);
}
