#include "holberton.h"

/**
 * print_rev - print the string reversed.
 * @s: pointer of the original string
 *
 * Description: nothing to say
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, n = 0;
	char c = *s, d = *s;

	while (c != '\0')
	{
		n++;
		c = *(s + n);
	}
	for (i = n - 1; i >= 0; i--)
	{
		d = *(s + i);
		_putchar(d);
	}
	_putchar('\n');
}
