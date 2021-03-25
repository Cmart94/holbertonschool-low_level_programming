#include "lists.h"

/**
 * add_node - function that a new node at the biginning of a linked list
 * @head: poiter to the head
 * @str: string data in the node
 * Return: address of the new elements, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
