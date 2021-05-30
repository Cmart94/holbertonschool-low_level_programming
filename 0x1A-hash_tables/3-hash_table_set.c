#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	unsigned long int index;
  
	if (node == NULL || ht == NULL)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		node->next = NULL;
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
