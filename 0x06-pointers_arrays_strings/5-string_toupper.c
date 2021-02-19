#include "holberton.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: string to modify
 * Description: none
 * Return: Char s modify
 */
char *string_toupper(char *s)
{
	int len = 0;

	for ( ; s[len] != '\0'; len++)
	{
		if (s[len] >= 'a' && s[len] <= 'z')
			s[len] = s[len] - 32;
	}
	return (s);
}
