#include "lists.h"

/**
 * add_dnodeint - Add a node at the head of the linked list.
 *
 * @head: Double pointer to the linked list.
 *
 * @n: Value of the new node.
 *
 * Return: Pointer to the new node, if fails return NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;

	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (*head);
}
