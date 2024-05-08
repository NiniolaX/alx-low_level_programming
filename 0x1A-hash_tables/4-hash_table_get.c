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
	hash_node_t *ptr = NULL;
	char *val = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	/* Key does not exist */
	if (ht->array[index] == NULL)
		return (NULL);

	/* Key exists */
	for (ptr = ht->array[index]; ptr != NULL; ptr = ptr->next)
	{
		if (strcmp(key, ptr->key) == 0)
			val = ptr->value;
	}

	return (val);
}
