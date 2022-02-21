#include "main.h"

/**
 * _strchr - Locates a character in a string.
 *
 * @s: String.
 *
 * @c: character to match.
 *
 * Return: A pointer to &s[i] if c is exists in s or NULL;
 */

char *_strchr(char *s, char c)
{
	unsigned int i, j;
	char *result = NULL;

	while (s[j])
	{
		j++;
	}

	while (i <= j)
	{
		if (s[i] == c)
		{
			result = &s[i];
			break;
		}
		i++;
	}

	return (result);
}
