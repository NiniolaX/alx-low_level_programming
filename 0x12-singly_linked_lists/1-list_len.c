#include "lists.h"

/**
 * list_len - Returns number of elements in a linked list list_t
 * @h: Head of linked list
 * Return: Number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
	{
		return (-1);
	}

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
