#include "lists.h"

/**
 *_strlen - Returns the length of a string.
 *
 * @s: Pointer to an first letter of a string.
 *
 * Return: The length of an string
 */

unsigned int _strlen(const char *s)
{
	unsigned int size = 0;

	if (s)
		while (s[size] != '\0')
			size++;

	return (size);
}

/**
 * _strdup - Creates a pointer with a copy of the str param
 *
 * @str: String to copy
 *
 * Return: a pointer to the duplicated string or
 * null if the memory is insufficient or if the str is NULL
 */

char *_strdup(const char *str)
{
	char *duplicated_str;
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	duplicated_str = malloc((size + 1) * sizeof(char));

	if (duplicated_str == NULL)
		return (NULL);

	while (i < size)
	{
		duplicated_str[i] = str[i];
		i++;
	}

	duplicated_str[i] = '\0';

	return (duplicated_str);
}

/**
 * add_node_end - Adds a new node at the end of a list_t.
 *
 * @head: Double pointer to the head of a linked list
 *
 * @str: String to assign to the new node
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *last_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/*Set the values of the new_node*/
	new_node->len = _strlen(str);
	new_node->str = _strdup(str);
	new_node->next = NULL;

	/*If head doesn't exist our new node is the head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*The last node obtain the position of head*/
	last_node = *head;

	/*Move the pointer last_node to the end of the list*/
	while (last_node->next != NULL)
		last_node = last_node->next;

	/*Add the new node to the last node*/
	last_node->next = new_node;

	/*Return the addres of the new node*/
	return (new_node);
}
