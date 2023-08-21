#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Address of head node
 * @n: Integer element of new node
 * Return: Address of new element or NULL on fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Build new node */
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	/* If list is empty */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* If list is not empty */
	while (ptr->next)
		ptr = ptr->next;
	new->prev = ptr;
	ptr->next = new;

	return (new);
}
