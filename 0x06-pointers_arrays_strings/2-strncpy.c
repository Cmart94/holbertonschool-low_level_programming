#include "holberton.h"

/**
 * _strncpy - function that concatenates two strings
 * @dest: destiny array of chars
 * @src: string source
 * @n: number of characters to exit
 * Description: none
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len] != '\0'; len++)
		dest[len] = src[len];
	for ( ; len < n; len++)
		dest[len] = '\0';
	return (dest);
}
