#include "hash_tables.h"

/**
 * key_index - function for calculate the index with the key and size
 * @key: key word (phone user name for example)
 * @size: is the size of the array of the hash table
 * Return: return the hash table index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
