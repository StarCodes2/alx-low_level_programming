#include "hash_tables.h"

/**
 * hash_table_get - gets a value from the hash table
 * @ht: points to the hash table
 * @key: points to key
 *
 * Return: a string on  success or NULL if it fails
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (ht->array[index]->value);
		node = node->next;
	}

	return (NULL);
}
