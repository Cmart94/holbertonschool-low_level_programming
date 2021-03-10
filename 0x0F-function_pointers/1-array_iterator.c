#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that call function to print each element of array
 * @array: array to print
 * @size: length to the array
 * @action: funiton to apply
 * Return: void fnction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		exit(0);
}
