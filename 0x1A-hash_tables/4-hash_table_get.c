#include "hash_tables.h"

/**
 * hash_table_get - Get the value from a hash table
 *
 * @ht: Hash table to search into. (hash_table_t *)
 *
 * @key: Key you are looking for. (char *)
 *
 * Return: The value founded by key, NULL otherwise.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (!ht || !ht->array || !key)
		return (value);

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];
	if (!node)
		return (value);

	value = node->value;

	return (value);
}
