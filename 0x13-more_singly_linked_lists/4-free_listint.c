#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Address of head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	/* temp temporarily holds address of each instance of head node */
	listint_t *temp;

	while (head != NULL)
	{
		/* Store address of next node in temp and move ptr to it */
		temp = head->next;
		/* Free head node */
		free(head);
		/* Make current node the new head */
		head = temp;
	}
}
