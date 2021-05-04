#include "lists.h"

/**
 * add_dnodeint - add a node at the begining of a doubly list
 * @head: double pointer to list head
 * @n: const in n data
 * Return: the address of the new elements, or NULL it it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		perror("malloc malo");
		return (NULL);
	}
	new_node->n = n;
	/* this node is the begining always */
	new_node->next = *head;
	new_node->prev = NULL;
	/* change the value of prev, is the new node */
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
