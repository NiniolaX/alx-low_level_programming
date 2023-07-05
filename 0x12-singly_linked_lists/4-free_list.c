#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Address of head node
 * Return: void
 */

void free_list(list_t *head)
{
	/* Pointer temp to hold the address of next node temporarily */
	list_t *temp = head;

	while (head != NULL)
	{
		/* Store address of next node in temp & move pointer to node */
		temp = head->next;
		/* Free node head */
		free(head->str);
		free(head);
		/* Re-assign address of next node to head */
		head = temp;
	}
}
