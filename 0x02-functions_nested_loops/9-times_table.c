#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - computes the absolute value of an integer
 * @n: x integer
 * Description: Imprimir el signo de un numero
 * Return: LastDigit (Success)
*/
void times_table(void)
{
	int filas;
	int columnas;
	int multiplicacion;

	for (filas = 0; filas <= 9; filas++)
	{
		for (columnas = 0; columnas <= 9; columnas++)
		{	
			multiplicacion = filas * columnas;
			printf("%d, ", multiplicacion);
		}
		printf("\n");
	 }
	
}

