#include "lists.h"

/**
 * add_dnodeint_end - add a node in the end of the doubly linkd list
 * @head: doubly linked list head
 * @n: node data
 * Return: the address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)),
		*last_node = *head;

	if (new_node == NULL)
		return (NULL);
	/* put data in new node */
	new_node->n = n;
	/* if the list is empty, the head is this node */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	/* else traverse till the last node */
	while (last_node->next != NULL)
		last_node = last_node->next;
	/* put the new node in the last position */
	last_node->next = new_node;
	/*make the old last node as the prev */
	new_node->prev = last_node;
	return (*head);
}
