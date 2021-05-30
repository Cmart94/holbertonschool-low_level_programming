#include "hash_tables.h"

/**
 * hash_table_delete - function that delete a hash table
 * @ht: hash table to delete
 * Return: void function
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp1 = NULL, *tmp2 = NULL;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			tmp1 = ht->array[i];
			while (tmp1 != NULL)
			{
				tmp2 = tmp1->next;
				free(tmp1->key);
				free(tmp1->value);
				free(tmp1);
				tmp1 = tmp2;
			}
			if (ht->array[i] != NULL)
				free(ht->array[i]);
		}
		free(ht->array);
		free(ht);
	}
}
