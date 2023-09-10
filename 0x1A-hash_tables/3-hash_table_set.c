#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new = NULL, *ptr = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	/* No collision */
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = malloc(sizeof(hash_node_t));
		ht->array[idx]->key = strdup(key);
		if (value != NULL)
			ht->array[idx]->value = strdup(value);
		else
			ht->array[idx]->value = NULL;
		ht->array[idx]->next = NULL;
		return (1);
	}
	/* Collision */
	for (ptr = ht->array[idx]; ptr != NULL; ptr = ptr->next)
	{
		/* If key exists */
		if (strcmp(key, ptr->key) == 0)
		{
			if (ptr->value != NULL)
			{
				free(ptr->value);
				ptr->value = strdup(value);
			}
			else
				ptr->value = strdup(value);
			return (1);
		}
		/* If key does not exist */
		if (ptr->next == NULL)
		{
			new = malloc(sizeof(hash_node_t));
			new->key = strdup(key);
			if (value != NULL)
				new->value = strdup(value);
			else
				new->value = NULL;
			new->next = ht->array[idx];
			ht->array[idx] = new;
			return (1);
		}
	}
	return (0);
}
