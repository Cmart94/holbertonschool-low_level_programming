#include <stdio.h>

/**
 * main - print the name of the argv[]
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 Succes
 */
int main(int argc, char *argv[])
{
	int i = argc;
	printf("%s\n", argv[0]);

	return (i);
}
