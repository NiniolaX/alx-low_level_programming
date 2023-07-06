#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Poiter to address of new node
 * @idx: Index of the list where new node should be added
 * @n: Integer ata to be stored in new node
 * Return: Address of new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr = *head, *temp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	while (i < idx)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	new->n = n;
	/* Store the address of the next node in temp */
	temp = ptr->next;
	/* Make 'new' the new 'next node' */
	ptr->next = new;
	/* Store address of former 'next node' in next element of new */
	new->next = temp;

	return (new);
}
