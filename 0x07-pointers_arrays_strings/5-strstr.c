#include "main.h"

/**
 * _strstr - Locates a substring.
 *
 * @haystack: String.
 *
 * @needle: string to match.
 *
 * Return: Pointer to the byte in s of null.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, counter = 0, size = 0;

	while (needle[size])
	{
		size++;
	}

	if (!size)
	{
		return (haystack);
	}

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					counter++;
					if (counter == size)
					{
						return (&haystack[i]);
					}
					continue;
				}
				break;
			}
		}
		i++;
	}
	return (0);
}
