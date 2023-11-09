#include "hash_tables.h"

/**
 * shash_table_create - create a hash table of type shash_table_t
 * @size: contains the number of elements the table will hold
 *
 * Return: a pointer to the new hash table on success or NULL otherwise
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}

/**
 * shash_table_set - adds a new element to the hash table
 * @ht: contains a pointer to the hash table
 * @key: points to the key string
 * @value: points to the value to be stored
 *
 * Return: 1 on success or 0 if it fails
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *valuec, *keyc;
	shash_node_t *new, *temp;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	valuec = strdup(value);
	if (valuec == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = valuec;
			return (1);
		}
		temp = temp->next;
	}

	keyc = strdup(key);
	if (keyc == NULL)
	{
		free(valuec);
		return (0);
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(valuec), free(keyc);
		return (0);
	}
	new->key = keyc;
	new->value = valuec;
	new->next = ht->array[index];
	ht->array[index] = new;
	sort_table(ht, new);
	return (1);
}

/**
 * sort_table - place a node in the hash table in its right position
 * in a doubly linked list using the key to sort the list
 * @ht: points to the hash table
 * @node: points to the node to be added to the list
 */

void sort_table(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (ht == NULL || node == NULL)
		return;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		node->snext = NULL;
		node->sprev = NULL;
		return;
	}
	temp = ht->shead;
	while (temp->snext && strcmp(node->key, temp->key) > 0)
		temp = temp->snext;

	if (!temp->snext && strcmp(node->key, temp->key) > 0)
	{
		temp->snext = node;
		node->sprev = temp;
		node->snext = NULL;
		ht->stail = node;
		return;
	}

	node->snext = temp;
	node->sprev = temp->sprev;
	if (temp->sprev != NULL)
		temp->sprev->snext = node;
	else
		ht->shead = node;
	temp->sprev = node;
}

/**
 * shash_table_get - gets the value at an index
 * @ht: points to the hash table
 * @key: points to the key
 *
 * Return: value on success or NULL on failure
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size || ht->array[index] == NULL)
		return (NULL);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the hash table sorted by key
 * @ht: points to the table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	temp = ht->shead;
	printf("{");
	while (temp)
	{
		if (i > 0)
			printf(", ");

		i += 1;
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - prints the hash table sorted by key in reverse
 * @ht: points to the table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	temp = ht->stail;
	printf("{");
	while (temp)
	{
		if (i > 0)
			printf(", ");

		i = 1;
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a table
 * @ht: point to the table
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *temp;

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
 *m* @mem: points to the memory
 */

void _free(void *mem)
{
	if (mem != NULL)
		free(mem);
}
