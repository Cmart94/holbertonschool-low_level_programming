#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file to be write
 * @text_content: string to write to the file
 * Return: 1 on Succes, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, r;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	for (len = 0; text_content[len] != '\0'; len++)
	{}
	r = write(fd, text_content, len);
	if (r < 0)
	{
		return (-1);
	}
	else
	{
		close(fd);
		return (1);
	}
}
