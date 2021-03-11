#include "function_pointers.h"

/**
 * int_index - function thath return the position of the first match
 * @array: array to compare
 * @size: array length
 * @cmp: function for compare the elementos for the array
 * Return: i if any element match, -1 if do not size is 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
