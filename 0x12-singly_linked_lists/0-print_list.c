#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: The head of a linked list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int number_of_elements = 0;

	/*Validate if the pointer to the linked list is Null*/
	if (h == NULL)
		return (0);

	/*While h != NULL continue the loop*/
	while (h != NULL)
	{
		/*
		 * If the str == NULL print a default msg
		 * Otherwise print the len of the str and the str
		 */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		/*Increment the iterator*/
		number_of_elements++;
		/*The pointer to the linked list now points to the next node*/
		h = h->next;
	}

	return (number_of_elements);
}
