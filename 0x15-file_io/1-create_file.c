#include "holberton.h"

/**
 * create_file - creates a file. The file must have those permissions rw-------
 * If the file already exists, do not change the permissions
 * if the file already exists, truncate it
 * if text_content is NULL create an empty file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; !text_content[len]; len++)
		{}
	}

	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
