#include "holberton.h"

/**
 * _sqrt_recursion - return the square root of a natural number
 * @n: number for calculate the sqrt root
 * Return: -1 if n does have a natural square root
 */
int _sqrt_recursion(int n)
{
	int r;

	if (n < 0)
		return (-1);
	r = sqrtDown(1, n);
	return (r);
}

/**
 * sqrtDown - function  that calculate the number that satisfy i * i = n
 * @i: number for determinate the natural root
 * @k: number to determinate de root
 * Return: i if i*i == k, -1 if i*i>k
 */
int sqrtDown(int i, int k)
{
	if (i * i == k)
		return (i);
	else if (i * i > k)
		return (-1);
	return (sqrtDown(i + 1, k));
}
