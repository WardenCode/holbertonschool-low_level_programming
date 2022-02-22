#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: String.
 *
 * @accept: string to match.
 *
 * Return: Pointer to the byte in s of null.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;
	char *result = NULL;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (result = &s[i]);
		}
	}

	return (result);
}
