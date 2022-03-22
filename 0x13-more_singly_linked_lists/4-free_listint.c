#include "lists.h"

/**
 * free_listint - Free a list.
 *
 * @head: Pointer to the head (element) of a linked list.
 *
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	listint_t *placeholder_head = NULL;

	if (!head)
		return;

	while (head)
	{
		placeholder_head = head;
		head = head->next;
		free(placeholder_head);
	}
}
