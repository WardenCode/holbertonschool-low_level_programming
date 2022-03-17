#include "lists.h"

/**
 * list_len - Count the number of nodes in a linked list
 *
 * @h: Pointer to the head of a singly linked list
 *
 * Return: Quantity of nodes in a sinlgy linked list
 */

size_t list_len(const list_t *h)
{
	unsigned int number_of_elements = 0;

	/*Validate if the pointer to the linked list is Null*/
	if (h == NULL)
		return (0);

	/*While h != NULL continue the loop*/
	while (h != NULL)
	{
		number_of_elements++;
		h = h->next;
	}

	return (number_of_elements);
}

