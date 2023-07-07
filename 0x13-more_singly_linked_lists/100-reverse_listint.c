#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to address of list
 * Return: Pointer to first node of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		/* Store address of next node in next pointer */
		next = (*head)->next;
		/* Update next element of head with address of previous node */
		(*head)->next = prev;
		/* Store addr of current node (head) in prev */
		prev = *head;
		/* Move head to next node */
		*head = next;
	}

	return (*head);
}
