#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements in a list
 * @h: Head of lst to be printed
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (-1);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
