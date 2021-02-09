#include "holberton.h"

/**
 *print_alphabet - check the code for Holberton School students.
 *decription: use _putchar.c to print the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		_putchar(letra);
		letra++;
	}
	_putchar('\n');
	return (0);
}
