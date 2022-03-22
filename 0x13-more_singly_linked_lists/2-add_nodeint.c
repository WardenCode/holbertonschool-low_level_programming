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
	{
		printf("Error\n");
		return (NULL);
	}
	new_head->n = n;

	if (!head)
	{
		new_head->next = NULL;
		*head = new_head;
	}

	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
