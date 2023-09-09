#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: Pointer to hash table
 * @key: key
 * Return: Value associated with key on success, or NULL on fail.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *val = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	/* Get index of key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Retrieve value at index */
	if (ht->array[index] == NULL)
		return (NULL);
	else
		val = ht->array[index]->value;

	return (val);
}
