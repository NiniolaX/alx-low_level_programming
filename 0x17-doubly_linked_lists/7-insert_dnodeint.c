#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Iinserts a new node at a given position
 * @h: Address of head node
 * @idx: Index of the list where the new node should be added
 * @n: Element of new node
 * Return: Address of the new node, or NULL on failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr = *h;
	unsigned int i = 0;

	/* Check if address is valid */
	if (h == NULL)
		return (NULL);

	/* Build new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	/* Traverse to idx in list */
	while(ptr != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = ptr->next;
			new->prev = ptr;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
		i++;
	}

	return (NULL);
}
