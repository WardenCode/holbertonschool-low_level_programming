#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: Pointer to the linked list.
 *
 * @n: The int to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = NULL;

	new_head = malloc(sizeof(listint_t));
	if (!new_head)
		return (NULL);

	new_head->n = n;

	if (!head && !*head)
	{
		new_head->next = NULL;
		*head = new_head;
		return (new_head);
	}

	new_head->next = *head;
	*head = new_head;

	return (new_head);
}

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: Double pointer to the head of the list.
 *
 * @idx: Index of the list where the new node should be added.
 *
 * @n: Data (Number) of the new node.
 *
 * Description: Inserts a new node at a given position.
 * If it's impossible to add the new node at index idx, do not add the new node
 * and return NULL
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *next = NULL, *holder = NULL;
	unsigned int i = 0;

	if (!head)
		return (0);

	if (idx == 0)
		return (add_nodeint(head, n));
	else if (!*head && idx != 0)
		return (0);

	holder = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	for (i = 0; i < idx && holder; i++)
	{
		if (i != idx - 1)
		{
			holder = holder->next;
		}
		else
		{
			next = holder->next;
			holder->next = new_node;
		}
	}

	if (!holder)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = next;

	return (new_node);
}
