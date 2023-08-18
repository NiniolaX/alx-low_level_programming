#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t
 *	 linked list
 * @head: Address of head node
 * @index: Index of node to be deleted
 * Return: 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (i < index - 1)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
		i++;
	}

	(ptr->prev)->next = ptr->next;
	free(ptr);

	return (1);
}
