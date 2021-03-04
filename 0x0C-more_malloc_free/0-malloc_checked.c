#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: size of the space to be allocated
 * Return: Pointer to the allocated memory, If it fails return 98
 */
void *malloc_checked(unsigned int b)
{
	int *dest;

	if (b == 0)
	{
		return (NULL);
	}
	dest = malloc(b);
	if (dest == NULL)
		exit (98);
	return (dest);
}
