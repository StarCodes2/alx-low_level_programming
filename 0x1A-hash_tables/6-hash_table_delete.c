#include  "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: points to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		node = ht->array[i];
		while (node->next)
		{
			temp = node->next;
			_free(node->key), _free(node->value), _free(node);
			node = temp;
		}
		_free(node->key), _free(node->value), _free(node);
	}
	_free(ht->array), _free(ht);
}

/**
 * _free - frees dynamically allocated memory
 * @mem: points to the memory
 */

void _free(void *mem)
{
	if (mem != NULL)
		free(mem);
}
