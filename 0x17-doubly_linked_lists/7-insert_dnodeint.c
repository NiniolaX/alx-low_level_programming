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
	dlistint_t *new, *ptr;
	unsigned int i;

	/* Check if address is valid */
	if (h == NULL)
		return (NULL);
	ptr = *h;

	/* Build new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	/* idx is 0 */
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	/* Traverse to idx in list */
	for (i = 0; i < idx && ptr != NULL; i++)
	{
		if (i == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
			new->prev = ptr;
			return (new);
		}
		ptr = ptr->next;
	}

	return (NULL);
}
