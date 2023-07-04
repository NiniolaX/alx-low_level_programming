#include "lists.h"
#include <string.h>

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to string
 * Return: Length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
/**
 * add_node - Adds a new node at a beginning of a singly linked list list_t
 * @head: Head of linked list
 * @str: String to be added to beginning of node
 * Return: Address of new head node or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for new head node, return NULL if malloc fails */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Initialize elements of the new node */
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;

	/* Store address of new node in head */
	*head = new_node;

	return (*head);
}
