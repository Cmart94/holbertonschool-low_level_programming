#include "function_pointers.h"

/**
 * print_name - Function that call function to print the variable *name
 * @name: pointer to the name to print
 * @@f: ponter to the function
 * Return: void function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
