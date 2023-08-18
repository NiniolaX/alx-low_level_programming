#include "lists.h"
#include <stdlib.h>

#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list 'listint_t'
 * @h: Pointer to head node of list
 * Return: Number of elements in a list
 */
unsigned int list_len(dlistint_t *h)
{
	unsigned int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}

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
	unsigned int i = 0, listLen;

	/* Check if address is valid */
	if (h == NULL)
		return (NULL);
	ptr = *h;

	listLen = list_len(*h);
	if (idx > listLen)
		return (NULL);

	/* Build new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	/* idx is 0 */
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	/* Traverse to idx in list */
	while (i < idx - 1)
	{
		if (ptr == NULL)
			return (NULL);
		i++;
		ptr = ptr->next;
	}

	new->next = ptr->next;
	new->prev = ptr;
	ptr->next = new;

	return (new);
}
