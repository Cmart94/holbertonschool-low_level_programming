#include "holberton.h"

/**
 * _isupper - write a function that checks for uppercase character
 * @c: letter entrance
 * Return: 1 if is uppercase 0 lowcase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
