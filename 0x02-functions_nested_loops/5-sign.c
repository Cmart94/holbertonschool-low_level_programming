#include "holberton.h"

/**
 *print_sign - funcion detectar signo de un numero
 * @n: numeros
 * Description: Imprimir el signo de un numero
 * Return: 1 if is positive, 0 if its 0, -1 if its lees than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
