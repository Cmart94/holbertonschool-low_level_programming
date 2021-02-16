#include "holberton.h"

/**
 * swap_int - Swap the values of two variables
 * @a : pointer of a
 * @b : pointer of b variable
 * Return : Alqawys 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
