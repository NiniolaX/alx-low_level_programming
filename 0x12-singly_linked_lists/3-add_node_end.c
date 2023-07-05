#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to address of head node
 * @str: String ro be duplicated as element of new node
 * Return: Address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	/* ptr to help traverse through list_t */
	list_t *ptr = *head;
	unsigned int len = 0;

	/* Calculate length of string */
	while (str[len] != '\0')
	{
		len++;
	}

	new = malloc(sizeof(size_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	/* Create new node if list is empty */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Move ptr to last node */
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	/* Store address of new node in last node's next element */
	ptr->next = new;

	return (new);
}
