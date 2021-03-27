#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to guet the bit
 * @index: position ti get the bit
 * Return: value of the bit or -1 if an error ocurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp = 1 << index;

	if (index > 63)
	{
		return (-1);
	}
	if ((tmp & n) == tmp)
	{
		return (1);
	}
	else
		return (0);
}
