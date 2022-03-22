#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node
 *
 * @head: Pointer to the head of the list
 *
 * @index: Position of the element on the list
 *
 * Return: The nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	for (; i < index && head; i++)
		head = head->next;

	return (head);
}
