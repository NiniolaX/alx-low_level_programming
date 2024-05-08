#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Head node of list
 * @index: Index of node
 * Return: nth node on success, NULL on fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}
