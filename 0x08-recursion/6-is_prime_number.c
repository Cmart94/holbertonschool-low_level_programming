#include "holberton.h"

/**
 * is_prime_number - function that check if is a prime number
 * @n: number to check if is prime
 * Return: 1 if its prime, 0 it it is not prime
 */
int is_prime_number(int n)
{
	int i, r;

	if (n <= 1)
	{
		r = 0;
	}
	if (n > 1)
	{
		i = n / 2;
		r = checkPrime(n, i);
	}
	return (r);
}

/**
 * checkPrime - function that compare i with n for check if it is prime number
 * @n: number to check
 * @i: comparator
 * Return: 1 if its prime, 0 it it is not prime
 */
int checkPrime(int n, int i)
{
	int r;

	if (i == 1)
	{
		r = 1;
	}
	if (i != 1)
	{
		if (n % i == 0)
			r = 0;
		else
			r = checkPrime(n, i - 1);
	}
	return (r);
}
