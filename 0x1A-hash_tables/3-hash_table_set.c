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
	char *copy, *keyc;
	hash_node_t *node, *temp;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = copy;
			return (1);
		}
		temp = temp->next;
	}
	keyc = strdup(key);
	if (keyc == NULL)
	{
		free(copy);
		return (0);
	}

	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
	{
		free(copy), free(keyc);
		return (0);
	}
	node->key = keyc;
	node->value = copy;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
