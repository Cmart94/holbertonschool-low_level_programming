#include "variadic_functions.h"

/**
 * print_numbers - prints numbers in the arguments
 * @separator: string ti be printed between numbers
 * @n: number of integers passed to the function
 * Return: void function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(arg, unsigned int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
