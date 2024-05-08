#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list 'listint_t'
 * @h: Pointer to head node of list
 * Return: Number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
