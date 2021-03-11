#include "variadic_functions.h"

/**
 * sum_them_all -  variadic function that return the add of the arguments
 * @n: first nmber to add
 * Return: return the result of the add. 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(argumentos, n);
	for (i = 0; i < n; i++)
		sum += va_arg(argumentos, unsigned int);
	va_end(argumentos);
	return (sum);
}
