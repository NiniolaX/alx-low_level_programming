#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements in a list
 * @h: Head of lst to be printed
 * Return: Size of printed list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
