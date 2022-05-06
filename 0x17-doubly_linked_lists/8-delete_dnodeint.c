#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;

	if (!head || !(*head))
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp && index != 1)
		tmp = tmp->next, index--;

	if (!tmp && index != 1)
		return (-1);

	if (!tmp->next)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}

	tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;
	free(tmp);

	return (1);
}
