#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of the linked list
 * @h: Pointer to head node of list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
