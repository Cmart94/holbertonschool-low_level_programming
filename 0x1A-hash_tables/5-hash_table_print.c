#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table for print
 * Return: void function
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i = 0, flag = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		exit(EXIT_FAILURE);
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			flag = 1;
		}
	}
	printf("}\n");
}
