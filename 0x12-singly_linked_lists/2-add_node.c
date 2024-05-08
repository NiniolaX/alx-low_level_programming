#include "lists.h"

/**
 * add_node - Adds a new node at a beginning of a singly linked list list_t
 * @head: Pointer to address of head node
 * @str: String to be added to beginning of node
 * Return: Address of new head node or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	/* Allocate memory for new head node, return NULL if malloc fails */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Calculate length of string argument passed */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Initialize elements of the new node */
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;

	/* Store address of new node in head */
	*head = new_node;

	return (*head);
}
