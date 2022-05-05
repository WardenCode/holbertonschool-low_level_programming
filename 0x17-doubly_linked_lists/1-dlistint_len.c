#include "lists.h"

/**
 * dlistint_len - Count the elements on a double linked list.
 *
 * @h: The head of the linked list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h)
		return (1 + dlistint_len(h->next));

	return (0);
}
