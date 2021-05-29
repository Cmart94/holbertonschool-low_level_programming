#include "hash_tables.h"

/**
 * hash_table_create - Function that create a hash table
 * @size: hash table lenght
 * Return: pointer to the newly created hash table, or NULL if something
 * went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t));
	if (hash_table->array == NULL)
	{
		free(hash_table->array);
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
