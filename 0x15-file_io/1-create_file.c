#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Points to the file's name
 * @text_content: Points to a string
 *
 * Return: 1 on success or -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, slen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[slen])
			slen++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, slen);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
