#include "holberton.h"

/**
 * _isdigit - function that checks if digit is a number (0 to 9)
 * @c: digit
 * Return: 1 if is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
