#include "lists.h"

/**
 * get_dnodeint_at_index - function that get  the nth node of a linked list
 * @head: linked list head
 * @index: nth node to get
 * Return: pointer to the nth node, if it does not exit NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
