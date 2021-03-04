#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates s1 whith the n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 * Return: pointer to a concatenate string, NULL if malloc fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j = 0;
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
	if (n >= len2)
		n = len2;
	dest = malloc(sizeof(char) * (len1 + n + 1));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		dest[i] = s1[i];
	for (i = len1; i < len1 + n; i++, j++)
		dest[i] = s2[j];
	dest[len1 + n] = '\0';
	return (dest);
}
