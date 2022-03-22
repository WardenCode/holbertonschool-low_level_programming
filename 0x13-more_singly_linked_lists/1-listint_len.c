#include "lists.h"
#include <stddef.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 *
 * @h: Pointer to a linked list
 *
 * Return: The number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	for (; h; node_counter++)
		h = h->next;

	return (node_counter);
}
