#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: A linked list like an argument
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_numbers = 0;

	for (; h != NULL; node_numbers++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node_numbers);
}
