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
	unsigned long int index;
	hash_node_t *new = NULL, ptr = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* No collision */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		ht->array[index]->key = (char *)key;
		if (value != NULL)
			ht->array[index]->value = strdup(value);
		else
			ht->array[index]->value = NULL;
		ht->array[index]->next = NULL;
	}
	/* Collision */
	else
	{
		ptr = ht->array[index];

		/* Build new node of linked list */
		new = malloc(sizeof(hash_node_t));
		new->key = (char *)key;
		if (value != NULL)
			new->value = strdup(value);
		else
			new->value = NULL;
		new->next = NULL;

		/* Traverse to last node of linked list */
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}

	return (1);
}
