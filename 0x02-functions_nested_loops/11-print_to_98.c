#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - computes the absolute value of an integer
 * @n: x integer
 * Description: Imprimir el signo de un numero
 * Return: LastDigit (Success)
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for(; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}


