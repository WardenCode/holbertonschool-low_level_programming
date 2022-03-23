#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 *
 * @head: Double pointer to the head of the list.
 *
 * @index: Index of the list where the new node should be added.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL, *holder = NULL, *to_delete = NULL;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
		return (1);
	}

	holder = *head;

	for (i = 0; i <= index && holder; i++)
	{
		if (index - 1 == i)
			prev = holder;

		if (i == index)
			to_delete = holder;

		holder = holder->next;
	}

	if (!holder && !to_delete)
		return (-1);

	free(to_delete);

	prev->next = holder;

	return (1);
}
