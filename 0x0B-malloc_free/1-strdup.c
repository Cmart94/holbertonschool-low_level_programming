#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy of the string given as a parameter.
 * @str: string for be copied
 * Return: pointer to a copy string, or Null if str is null
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (0);
	if (s != NULL)
	{
		for (i = 0; i < len; i++)
		{
			s[i] = str[i];
		}
		s[len] = '\0';
	}
	return (s);
}
