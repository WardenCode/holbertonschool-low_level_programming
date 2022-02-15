#include "main.h"

/**
 * rev_string - reverse a string.
 *
 * @s: String.
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int size = 0;
	char *second_pointer = s;
	char tmp;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	s--;
	size--;

	if (size % 2 != 0)
	{
		while (second_pointer < s)
		{
			tmp = *second_pointer;
			*second_pointer = *s;
			*s = tmp;
			s--;
			second_pointer++;
		}
	}
	else
	{
		while (second_pointer != s)
		{
			tmp = *second_pointer;
			*second_pointer = *s;
			*s = tmp;
			s--;
			second_pointer++;
		}
	}
}
