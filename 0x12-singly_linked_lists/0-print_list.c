#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list
 * @h: node to print
 * Return: number of nodes to print, print [0] (nill) if str = NULL
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
			count += 1;
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
			count += 1;
		}
		tmp = tmp->next;
	}
	return (count);
}
