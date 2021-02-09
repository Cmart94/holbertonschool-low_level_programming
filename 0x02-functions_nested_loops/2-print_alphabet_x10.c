#include "holberton.h"

/**
 *print_alphabet_x10 - check the code for Holberton School students.
 *decription: use _putchar.c to print the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letra = 97;
	int linea;

	for (linea = 0; linea <= 9; linea++)
	{
		for (letra = 97; letra <= 122; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}
