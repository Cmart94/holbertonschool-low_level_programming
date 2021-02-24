#include "holberton.h"

/**
 * _puts_recursion - function that print a string with recursion
 * @s: pointer to the string to print
 * Return: Always 0 (Succes)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
