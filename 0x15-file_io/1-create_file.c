#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file ti be created
 * @text_content: string to write to the file
 * Return: 1 on Succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, r;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
