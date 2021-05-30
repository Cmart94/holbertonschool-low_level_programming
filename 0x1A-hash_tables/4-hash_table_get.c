#include "hash_tables.h"

/**
 * hash_table_get - functionthat retrieves a value associated with a key
 * @ht: hash table for look into
 * @key: key to looking for
 * Return: value associated with the key, or NULL if couldn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *tmp = NULL;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
