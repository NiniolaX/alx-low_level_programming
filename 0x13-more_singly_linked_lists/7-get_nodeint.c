#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Address of head node
 * @index: Index of the node
 * Return: Address of nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
