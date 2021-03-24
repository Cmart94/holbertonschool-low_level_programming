#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list
 * @h: Start node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}
