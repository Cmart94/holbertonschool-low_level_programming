#include "holberton.h"

/**
 *_islower - funcion detectar minusculas
 * @c: letras
 * Description: use _putchar.c to print
 * Return:  (Success)
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

