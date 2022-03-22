#include "lists.h"

/**
 * free_listint2 - Free a listint_list.
 *
 * @head: Double pointer to the head (element) of a linked list.
 *
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptrhead = *head, *placeholder_head = NULL;

	if (!head)
		return;

	while (ptrhead)
	{
		placeholder_head = ptrhead;
		ptrhead = ptrhead->next;
		free(placeholder_head);
	}
	*head = NULL;
}
