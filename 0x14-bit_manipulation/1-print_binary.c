#include "holberton.h"

/**
 * print_binary - function that print the bynary number of a decimal.
 * @n: unsigned long int decimal
 * Return: void function
 */
void print_binary(unsigned long int n)
{
	unsigned long int len, tmp = n;
	int i;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (len = 0; tmp > 1; len++)
		{
			tmp = tmp >> 1;
		}
		for (i = len; i >= 0; i--)
		{
			tmp = n >> i;
			_putchar('0' + (tmp & 1));
		}
	}
}
