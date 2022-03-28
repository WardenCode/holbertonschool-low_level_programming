#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: Name of the file to read it.
 *
 * @letters: Quantity of letters to read of the file.
 *
 * Return: The actual number of letters it could read and print.
 * 0 if filename is NULL, we can't open the file, write fails or don't write
 * the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = NULL;
	int fd = 0;
	ssize_t buf_size = 0;

	if (!filename || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	if (read(fd, buf, letters) == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	while (buf[buf_size])
		buf_size++;
	buf[buf_size] = '\0';

	close(fd);

	write(STDOUT_FILENO, buf, buf_size);

	free(buf);
	return (buf_size);
}
