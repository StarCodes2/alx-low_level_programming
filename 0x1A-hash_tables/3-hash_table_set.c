#include "hash_tables.h"

/**
 * hash_table_set - Adds a new element to the hash table
 * @ht: points to the hash table
 * @key: points to key characters
 * @value: point to the value to be stored
 *
 * Return: 1 on success or 0 if it fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
		return (0);

	node->key = strdup(key);

	if (value == NULL)
		value = "";
	node->value = strdup(value);

	index = key_index((unsigned char *)key, ht->size);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
