#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to address of head node
 * @n: Value to be stored in new node
 * Return: Address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	/* Add new node to list if NULL is passed */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Traverse to last element of the list */
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	/* Assign next element of last node to new */
	ptr->next = new;

	return (new);
}
