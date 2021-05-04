#include "lists.h"

/**
 * print_dlistint - print all elements of a  dounble linked list.
 * @h: double linked list header
 * Return: numbers of elements of the double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nextnode = h;
	int count = 0;  
	while (nextnode != NULL)
	{
		printf("%d\n", nextnode->n);
		count++;
		nextnode = nextnode->next;
	}
	return (count);
}
