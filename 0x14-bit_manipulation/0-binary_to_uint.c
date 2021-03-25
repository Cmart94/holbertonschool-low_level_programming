#include "holberton.h"

/**
 * _pow - calculate the pow of a number
 * @b: base
 * @exp: exponent
 * Return: resultdado of b pow exp
 */
unsigned int _pow(unsigned int b, unsigned int exp)
{
	unsigned int result = 1;

	while (exp != 0)
	{
		result *= b;
		--exp;
	}
	return (result);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string with the binary number
 * Return: unsigned int with the decimal number. (0) if b = NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, exp = 0;
	int len, i;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			decimal += _pow(2, exp);
		}
		if (b[i] != '0' && b[i] != '1')
			return (0);
		exp++;
	}
	return (decimal);
}
