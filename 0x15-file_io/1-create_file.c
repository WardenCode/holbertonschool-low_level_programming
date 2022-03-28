#include "main.h"

/**
 * create_file - Creates a file.
 *
 * @filename: Name of the new file.
 *
 * @text_content: Content of the new file.
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written, write “fails”).
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_RDWR | O_CREAT | O_APPEND, 0600);
		if (fd == -1)
			return (-1);
	}

	if (text_content)
		if (write(fd, text_content, strlen(text_content)) == -1)
		{
			close(fd);
			return (-1);
		}

	close(fd);

	return (1);
}
