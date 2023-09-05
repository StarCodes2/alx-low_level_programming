#include "main.h"

/**
 * main - Copies the content of a file to another
 * @argc: Contains the number of arguments passed to main
 * @argv: An array that holds pointers to the arguments passed to main
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int rd = 1, wr, to, from;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		read_err(argv[1], 0, 0);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		write_err(argv[2], 0, from);
	buf = c_buffer(argv[2]);

	while (rd)
	{
		rd = read(from, buf, 1024);
		if (rd == -1)
		{
			free(buf);
			read_err(argv[1], to, from);
		}
		wr = write(to, buf, rd);
		if (wr == -1)
		{
			free(buf);
			write_err(argv[2], to, from);
		}
		cl_file(to);
		to = open(argv[2], O_WRONLY | O_APPEND);
		if (to == -1)
			write_err(argv[2], to, from);
	}
	cl_file(to);
	cl_file(from);
	free(buf);
	return (1);
}

/**
 * cl_file - Close a file
 * @fd: Contains the file descriptor of the fule to be closed
 */

void cl_file(int fd)
{
	int cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * read_err - prints an error message and exit with code 98
 * @s: points to a string
 * @to: file descriptor for the destination file
 * @from: file descriptor for the source file
 */

void read_err(char *s, int to, int from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);

	if (to)
		cl_file(to);
	if (from)
		cl_file(from);

	exit(98);
}

/**
 * write_err - prints an error message and exit with code 99
 * @s: points to a string
 * @to: file descriptor for the destination file
 * @from: file descriptor for the source file
 */

void write_err(char *s, int to, int from)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);

	if (to)
		cl_file(to);
	if (from)
		cl_file(from);

	exit(99);
}

/**
 * c_buffer - creates a buffer of 1024 bytes
 * @s: Points to a file name
 *
 * Return: the address of the newly allocated memory space
 */

char *c_buffer(char *s)
{
	char *buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(99);
	}

	return (buf);
}
