#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to head node
 * Return: Number of elements in list or 0 on fail
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
