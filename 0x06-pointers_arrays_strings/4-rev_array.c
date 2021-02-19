#include "holberton.h"

/**
 * reverse_array - function that reverse the content of an array of integer
 *@a: array in
 *@n: size of the array
 * Description: none
 * Return: array reversed
 */
void reverse_array(int *a, int n)
{
	int len = 0, i = 0, j = n - 1;
	int dest[50];

	for ( ; len < n; len++, j--)
		dest[len] = a[j];
	for ( ; i < n; i++)
		a[i] = dest[i];
	a[n] = '\0';
}
