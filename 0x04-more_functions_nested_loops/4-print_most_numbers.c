#include "holberton.h"

/**
 * print_most_numbers - print numbers from 0 to 9.
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if ((n == 50) || (n == 52))
			n++;
		else
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
}
