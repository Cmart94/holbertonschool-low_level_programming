#include "holberton.h"

/**
 *_isalpha - funcion detectar minusculas
 * @c: letras
 * Description: saber si es letra mayuscula o minuscula
 * Return:  (Success)
 */
int _isalpha(int c)
{
	if ((c > 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

