#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - computes the absolute value of an integer
 * @n: x integer
 * Description: Imprimir el signo de un numero
 * Return: LastDigit (Success)
*/
void jack_bauer(void)
{
	int horas;
	int minutos = 0;

	for (horas = 0; horas <24; horas++)
	{
		while (minutos < 60)
		{
			putchar((horas/10) + '0');
			putchar((horas%10) + '0');
			putchar(':');
			putchar((minutos/10) + '0');
			putchar((minutos%10) + '0');
			putchar('\n');
			minutos++;
		}
		minutos = 0;
	}
	
}

