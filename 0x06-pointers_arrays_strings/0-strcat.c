#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destiny array of chars
 * @src: string source
 * Description: none
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
	int l1 = 0, j;

	while (dest[l1] != '\0')
		l1++;
	for (j = 0; src[j] != '\0'; j++, ++l1)
		dest[l1] = src[j];
	dest[l1] = '\0';

	return (dest);
}
