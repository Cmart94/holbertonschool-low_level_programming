#include "variadic_functions.h"

/**
 * print_strings - functions that prints string followed by a new line
 * @separator: string to be printed passed to the function
 * @n: number of strings passed to the function
 * Return: void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, const char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
