#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list
 * @h: Start node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		count += 1;
		tmp = tmp->next;
	}
	return (count);
}
