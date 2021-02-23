#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to scan
 * @accept: string to match the characters
 * Return: return a pointer ti the character in s that matches one of the
 * characters in accept, NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	int len1, len2, i, j, k;

	for (len1 = 0; s[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; accept[len2] != '\0'; len2++)
	{
	}
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				for (k = i; s[k] != '\0'; k++)
					return (s + i);
			}
			else
				return (0);
		}
	}
}

