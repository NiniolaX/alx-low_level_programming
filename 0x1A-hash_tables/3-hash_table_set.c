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
		ptr = head = ht->array[index];

		while (ptr->next != NULL)
		{
			/* If key exists but value is diff, update value */
			if (strcmp(key, ptr->key) == 0)
			{
				ptr->value = realloc(ptr->value, strlen(value));
				ptr->value = strcpy(ptr->value, value);
				return (1);
			}
			/* If key does not exist, create new node */
			if (ptr->next->next == NULL)
			{
				new = malloc(sizeof(hash_node_t));
				new->key = (char *)key;
				if (value != NULL)
					new->value = strdup(value);
				else
					new->value = NULL;
				/* Add new node at beginning of list */
				new->next = head->next;
				head->next = new;
				return (1);
			}
			ptr = ptr->next;
		}
	}

	return (0);
}
