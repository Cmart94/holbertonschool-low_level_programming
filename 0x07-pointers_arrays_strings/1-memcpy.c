#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destiny buffer with store the source
 * @src: source memory
 * @n: number of bytes from src for copy to dest
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
