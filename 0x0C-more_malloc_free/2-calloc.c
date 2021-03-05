#include <stdlib.h>

/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: syze of bytes
 * Return: Null if malloc fails, pointer wuth the size
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *dest;

	if (nmemb == 0 || size == 0)
		return (NULL);
	dest = malloc(nmemb * size);
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		dest[i] = 0;
	return (dest);
}
