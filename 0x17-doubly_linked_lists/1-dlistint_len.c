#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: linked list head
 * Return: size_t n elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nextnode = h;
	int count = 0;

	while (nextnode != NULL)
	{
		count++;
		nextnode = nextnode->next;
	}
	return (count);
}
