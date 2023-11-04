#include "hash_tables.h"

/**
 * hash_table_print - prints all the key-value pairs in the hash table
 * @ht: points to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int p_check = 0;
	hash_node_t *node;

	putchar('{');

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				if (p_check)
					printf(", ");
				printf("'%s: %s'", node->key, node->value);
				p_check = 1;

				while (node->next)
				{
					node = node->next;
					printf(", %s: %s",
						node->key, node->value);
				}
			}
		}
	}
	putchar('}');
	putchar('\n');
}
