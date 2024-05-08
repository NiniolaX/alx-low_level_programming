#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list and returns its data
 * @head: Pointer to address of head node
 * Return: Integer value/data in of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
