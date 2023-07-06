#include "lists.h"

/**
 * sum_listint - Adds all the data(n) of a listint_t list
 * @head: Address of head node
 * Return: Sum of all the data(n) of list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
