#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX.
 * @filename: name of the file to be printed
 * @letters: number of letter to be printed
 * Return: Number of letters it could read and print. NULL if malloc fail
 * 0 if the file can not be opened or read, 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len, nbytes;
	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	nbytes = read(fd, buffer, letters);
	len = write(STDOUT_FILENO, buffer, nbytes);
	close(fd);
	free(buffer);

	return (len);

}
