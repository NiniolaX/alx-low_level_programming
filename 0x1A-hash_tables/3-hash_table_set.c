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
	hash_node_t *new = NULL, *head = NULL, *ptr = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = head = ht->array[index];

	/* No collision */
	if (head == NULL)
	{
		head = malloc(sizeof(hash_node_t));
		head->key = strdup(key);
		if (value != NULL)
			head->value = strdup(value);
		else
			head = NULL;
		head->next = NULL;
		ht->array[index] = head;
		return (1);
	}
	/* Collision */
	while (ptr != NULL)
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
				ptr->value = NULL;
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
			/* Add new node at beginning of list */
			new->next = head;
			ht->array[index] = new;
			return (1);
		}
		ptr = ptr->next;
	}

	return (0);
}
