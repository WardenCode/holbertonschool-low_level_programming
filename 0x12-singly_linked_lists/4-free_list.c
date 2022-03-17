#include "lists.h"

/**
 * free_list - Free a list.
 *
 * @head: Double pointer to the head of a linked list
 *
 * Return: Void.
 */

void free_list(list_t *head)
{
	list_t *placeholder_head = NULL;

	if (!head)
		return;

	while (head)
	{
		placeholder_head = head;
		if (head->str)
			free(head->str);
		head = head->next;
		free(placeholder_head);
	}
}
