#include "holberton.h"

/**
 * more_numbers - print numbers from 0 to 9.
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int filas, columnas;

	for (filas = 0; filas <= 9; filas++)
	{
		for (columnas = 0; columnas <= 14; columnas++)
		{
			if (columnas >= 10)
			{
				_putchar(columnas / 10 + '0');
			}
			_putchar(columnas % 10 + '0');
		}
		_putchar('\n');
	}
}

