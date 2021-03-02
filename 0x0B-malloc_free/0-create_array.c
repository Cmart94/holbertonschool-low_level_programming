#include <stdlib.h>

/**
 * create_array - create an array with size @size with malloc
 * @size: size of the buffer
 * @c: initial character
 * Return: pointer to a char c
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size != 0)
	{
		str = malloc(sizeof(char) * size);
		if (str == NULL)
		{
			return (0);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				str[i] = c;
			}
			return (str);
		}
	}
	else
		return (NULL);
}
