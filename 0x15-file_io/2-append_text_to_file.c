#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: Name of the file
 * @text_content: String to write
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
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
