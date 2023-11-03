#include "hash_tables.h"

/**
 * key_index - creates a key index
 * @key: points to a string
 * @size: holds the size of the hash table array
 *
 * Return: an index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
