#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to address of head node
 * @n: Integer value to be stored in new node
 * Return: Pointer to new head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declare new node */
	listint_t *new;

	/* Allocate memory for new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	/* Initialize elements of new node */
	new->n = n;
	new->next = *head;

	/* Store address of new node in head */
	*head = new;

	return (*head);
}
