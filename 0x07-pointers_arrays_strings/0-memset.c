#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: buffer with the array
 * @b: constant byte
 * @n: unsigned int for fill n bytes
 * Return: buffer with the memory constant
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; (unsigned) i < n; i++)
		s[i] = b;
	return (s);
}
