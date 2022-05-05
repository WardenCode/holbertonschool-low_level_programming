#include "lists.h"

/**
 * sum_dlistint - Sum of all values of a double linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of values on the linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
		for (; head; head = head->next)
			sum += head->n;

	return (sum);
}
