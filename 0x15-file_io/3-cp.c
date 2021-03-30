#include "holberton.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 97 if number of arguments is not correct.
 * 98 if file_from does not exist or cant read it.
 * 99 if file can not create or wirite
 * 100 if can not close a file descriptor
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, nbytes1, nbytes2, cl1, cl2;
	char buffer[1024];

	if (argc !=3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	nbytes1 = read(fd1, buffer, 1024);
	if (fd1 < 0 || nbytes1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (argv[2])
		fd2 = open(argv[2], O_CREAT | O_WRONLY, 0664);
	else
		fd2 = open(argv[2], O_WRONLY | O_TRUNC);
	nbytes2 = write(fd2, buffer, nbytes1);
	if (fd2 < 0 || nbytes2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %i\n", fd1);
	else if (cl2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %i\n", fd2);
	if (cl2 < 0 || cl1 < 0)
		exit(100);
	return (1);
}
