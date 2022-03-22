#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 *
 * @head: Double pointer to the linked list
 *
 * Return: The data of the node, if the linked list is null return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *holder = NULL;
	int holder_value = 0;

	if (!head || !*head)
		return (0);

	holder = (*head)->next;
	holder_value = (*head)->n;

	free(*head);

	*head = holder;
	return (holder_value);
}
