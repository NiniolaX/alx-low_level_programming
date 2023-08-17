#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: head node of list
 * Return: Number of nodes in list on success, or 0 on fail
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
