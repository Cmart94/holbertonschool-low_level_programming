#include "holberton.h"

/**
 * _puts - function that prints a string
 * @str: poiter of the string to print
 * @n: array index.
 * @c: char that stores *str
 *
 * Description: nothing to say
 * Return: void function
 */
void _puts(char *str)
{
	int n = 0;
	char c = *str;

	while (c != '\0')
	{
		_putchar(c);
		++n;
		c = *(str + n);
	}
	_putchar('\n');
}
