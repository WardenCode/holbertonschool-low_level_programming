#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node on index inside of a linked list.
 *
 * @h: Double pointer to the doubly linked list.
 *
 * @idx: Index to insert the new node.
 *
 * @n: Value of the new node.
 *
 * Return: Position of the new node, NULL if fails or the index doesn't exits.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, flag = 0;
	dlistint_t *new_node = NULL, *tmp = NULL;

	if (!h)
		return (new_node);

	if (!*h || idx == 0)
	{
		new_node = add_dnodeint(h, n);
	}
	else
	{
		new_node = malloc(sizeof(dlistint_t));
		new_node->n = n;
		flag = 1;

		for (i = 0, tmp = *h; tmp && i <= idx + 1; tmp = tmp->next, i++)
			if (tmp && i == idx)
			{
				tmp->prev->next = new_node;
				tmp->prev = new_node;
				new_node->next = tmp;
				new_node->prev = tmp->prev;
				flag = 0;
				break;
			}
			else if (!tmp->next && i + 1 == idx)
			{
				new_node = add_dnodeint_end(h, n);
				flag = 0;
				break;
			}
	}

	if (flag)
		free(new_node);

	return (new_node);
}
