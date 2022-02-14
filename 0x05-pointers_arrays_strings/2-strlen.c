#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: pointer to an first letter of a string.
 *
 * Return: The length of an string
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	return (size);
}
