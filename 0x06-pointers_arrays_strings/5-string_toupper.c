#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @a: pointer to an array of numbers.
 *
 * Return: Void
 */

char *string_toupper(char *text)
{
	char a_lower = 97;
	char z_lower = 122;
	int i = 0;

	while (*(text + i) != '\0')
	{
		if (*(text + i) >= a_lower && *(text + i) <= z_lower)
		{
			*(text + i) -= 32;
		}
		i++;
	}

	return (text);
}
