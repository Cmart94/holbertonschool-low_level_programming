#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a concatenate string, NULL if malloc fail
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j = 0;
	char *dest;

	if (s1 == NULL || s1 == '\0')
		len1 = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
	}
	if (s2 == NULL || s2 == '\0')
		len2 = 0;
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
			len2++;
	}
	dest = malloc(sizeof(char) * (len1 + len2 + 1));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		dest[i] = s1[i];
	for (i = len1; i < len1 + len2; i++, j++)
		dest[i] = s2[j];
	dest[len1 + len2] = '\0';
	return (dest);
}
