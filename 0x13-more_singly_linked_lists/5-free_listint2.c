#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Address of head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		/* Store address of next node in temp and transverse to it */
		temp = (*head)->next;
		/* Free head */
		free(*head);
		/* Make current node the new head */
		*head = temp;
	}
	*head = NULL;
}
