#include "holberton.h"

/**
 * _strlen - print the lenght of a string
 * @s: pointer of the string
 * @sizeString: final size
 * @n: array position
 * @c: char whith *s data.
 * Description : nothing to say
 * Return: lenght of the string without '\0'
 */
int _strlen(char *s)
{
	int sizeString;
	int n = 1;
	char c = *s;

	while (c != '\0')
	{
		c = *(s + n);
		n++;
	}
	sizeString = n - 1;
	return (sizeString);
}
