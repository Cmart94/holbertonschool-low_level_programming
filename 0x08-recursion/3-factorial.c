#include "holberton.h"

/**
 * factorial - function that returns the factorial of a int
 * @n: integer to calculate the factorial
 * Return: the factorial of the int n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
