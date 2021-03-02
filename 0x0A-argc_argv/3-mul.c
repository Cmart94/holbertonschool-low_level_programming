#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: Number of arguments
 * @argv: array of arguments string
 * Return: 0 (Success), 1 if does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int producto = 1;

	if (argc == 3)
	{
		producto = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", producto);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
