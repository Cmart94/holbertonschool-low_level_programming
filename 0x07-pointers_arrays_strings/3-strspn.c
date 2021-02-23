#include "holberton.h"

/**
 *  _strspn - function that gets the length of a prefix substring
 * @s: string to search within
 * @accept: string that you want to find
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0, m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else
				k = 0;
		}
		if (k == 0)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
				break;
			}
		}
	}

	return (m);
}
