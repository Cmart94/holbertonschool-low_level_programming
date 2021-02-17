#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements
 * Description: print array
 * Return: void function
 */
void print_array(int *a, int n)
{
	int i;
	int c = *a;

	for (i = 0; i < n; i++)
	{
		c = *(a + i);
		if (i == n - 1)
		{
			printf("%d", c);
		}
		else
		{
			printf("%d, ", c);
		}
	}
	printf("\n");
}
