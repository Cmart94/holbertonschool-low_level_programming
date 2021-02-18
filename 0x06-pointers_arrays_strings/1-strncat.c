#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destiny array of chars
 * @src: string source
 * @n: number of characters to exit
 * Description: none
 * Return: nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1 = 0, j;

	while (dest[l1] != '\0')
		l1++;
	for (j = 0; src[j] != '\0'; j++, ++l1)
	{
		if (j < n)
			dest[l1] = src[j];
	}
	dest[l1] = '\0';
	return (dest);
}
