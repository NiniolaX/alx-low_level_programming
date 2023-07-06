#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of a listint_t list
 * @head: Pointer to address of head node
 * @index: Index of node to be deleted
 * Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (i < index - 1)
	{
		if (ptr == NULL)
		{
			return (-1);
		}
		ptr = ptr->next;
	}
	/* Store address of node at index in current pointer */
	current = ptr->next;
	/* Link node after node at index with node before index */
	ptr->next = current->next;
	free(current);

	return (1);

}
