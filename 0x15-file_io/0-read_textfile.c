#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Path to text file
 * @letters: Number of letters
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t total_letters;
	char *buf;

	total_letters = 0;
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(*buf) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	total_letters = read(fd, buf, letters);
	if (total_letters == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	total_letters = write(STDOUT_FILENO, buf, total_letters);
	if (total_letters == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (total_letters);
}
