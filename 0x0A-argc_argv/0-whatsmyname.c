#include <stdio.h>

/**
 * main - prints the name of the script
 * @argc: number of arguments
 * @argv: array of strings with the arguments
 * Return: Number of arguments (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (argc);
}
