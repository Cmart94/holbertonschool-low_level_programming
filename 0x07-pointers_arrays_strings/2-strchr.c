#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string where locate a character
 * @c: characte to locate.
 * Return: Pointer in the position if the character was locate
 * or NULL if the character is no found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
