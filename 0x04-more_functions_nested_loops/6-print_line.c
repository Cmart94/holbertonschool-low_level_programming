#include "holberton.h"

/**
 * more_numbers - print numbers from 0 to 9.
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}