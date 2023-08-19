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
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index + 1 && ptr != NULL; i++)
	{
		if (i == index)
		{
			(ptr->prev)->next = ptr->next;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
	}

	return (-1);
}
