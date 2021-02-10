#include "holberton.h"

/**
 * print_last_digit - computes the absolute value of an integer
 * @n: x integer
 * Description: Imprimir el signo de un numero
 * Return: LastDigit (Success)
*/
int print_last_digit(int n)
{
	int LastDigit = n % 10;

	if (n < 0)
		LastDigit = LastDigit * -1;

	_putchar(LastDigit + '0');

	return (LastDigit);
}
