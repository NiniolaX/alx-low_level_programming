#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Head node
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	/* Pointer to hold address of next node */
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
