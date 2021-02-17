#include "holberton.h"

/**
 * puts2 - prints the half of the string
 * @str: input string
 * Description: just print not return.
 * Return: Void
 */
void puts2(char *str)
{
	int i = 1, j, vlen;
	char c = *str, d;

	while (c != '\0')
	{
		c = *(str + i);
		i++;
		vlen = i;
	}
	for (j = 0; j <= vlen; j++)
	{
		d = *(str + j);
		if (j % 2 == 0 && d != '\0')
			_putchar(d);
	}
	_putchar('\n');
}
