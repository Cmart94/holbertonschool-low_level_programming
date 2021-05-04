#include "lists.h"

/**
 * sum_dlistint - add the data of a doubly linked list
 * @head: list head
 * Return: the sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *nextnode = head;
	int count = 0;

	while (nextnode != NULL)
	{
		count += nextnode->n;
		nextnode = nextnode->next;
	}
	return (count);
}
