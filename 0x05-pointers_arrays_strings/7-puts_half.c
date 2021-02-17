#include "holberton.h"

/**
 * puts_half - print the half of the string
 * @str: input string
 * Description: just print not return.
 * Return: Void
 */
void puts_half(char *str)
{
	int i = 1, j, strlen, n;
	char c = *str, d;

	while (c != '\0')
	{
		c = *(str + i);
		i++;
	}
	strlen = i - 1;
	if (strlen % 2 == 0)
	{
		n = strlen / 2;
		for (j = n; j <= strlen; j++)
		{
			d = *(str + j);
			_putchar(d);
		}
		_putchar('\n');
	}
	else
	{
		n = (strlen - 1) / 2;
		for (j = n; j <= strlen; j++)
		{
			d = *(str + j);
			_putchar(d);
		}
		_putchar('\n');
	}
}
