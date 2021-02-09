#include "holberton.h"
#include <ctype.h>

/**
 *_islower - funcion detectar minusculas
 * @c: letras
 * Description: use _putchar.c to print
 * Return:  (Success)
 */
int _islower(int c)
{
	int resultLower = islower(c);

	if (resultLower > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

