#include "holberton.h"

/**
 * rev_string - print the string to be reversed.
 * @s: pointer of the original string
 *
 * Description: nothing to say
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, n = 0;
	char c = *s, d = *s;

	while (c != '\0')
	{
		_putchar(c);
		n++;
		c = *(s + n);
	}
	_putchar('\n');
	for (i = n - 1; i >= 0; i--)
	{
		d = *(s + i);
		_putchar(d);
	}
	_putchar('\n');
}
