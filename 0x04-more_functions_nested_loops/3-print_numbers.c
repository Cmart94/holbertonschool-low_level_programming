#include "holberton.h"

/**
 * print_numbers - print numbers from 0 to 9.
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
