#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 *
 * @s: The direction first letter of a string.
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int size = 0;
	int i;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	s--;

	for (i = 0; i < size; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
