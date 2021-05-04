#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: list head
 * Return: void function
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node = NULL;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
