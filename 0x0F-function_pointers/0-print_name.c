#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that call function to print the variable *name
 * @name: pointer to the name to print
 * @f: ponter to the function
 * Return: void function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
