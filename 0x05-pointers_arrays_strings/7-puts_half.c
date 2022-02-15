#include "main.h"

/**
 * puts_half - Pints half of a string.
 *
 * @str: String.
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int size = 0;
	int i, n;

	while (*str != '\0')
	{
		size++;
		str++;
	}

	str -= size;

	if (size % 2 == 0)
	{
		for (i = (size / 2); i < size && i != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (size - 1) / 2;
		for (i = n + 1; i < size && i != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
