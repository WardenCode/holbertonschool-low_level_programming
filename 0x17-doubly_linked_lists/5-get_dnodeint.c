#include "lists.h"

/**
 * get_dnodeint_at_index - Get a node of a linked list by index.
 *
 * @head: Head of the linked list
 *
 * @index: Index to search in the linked list
 *
 * Return: The node if this is found or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = NULL;

	if (!head)
		return (NULL);

	node = head;

	for (i = 0; i <= index && node; node = node->next, i++)
		if (i == index)
			return (node);

	return (NULL);
}
