#include "main.h"

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: Both string concatenated of NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *final_str;
	int size1 = 0, size2 = 0, total_size, i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[size1])
		size1++;

	while (s2[size2])
		size2++;

	total_size = size1 + size2 + 1;
	final_str = malloc(total_size * sizeof(char));

	if (final_str == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
	{
		if (size1)
			final_str[i] = s1[i];
		if (i >= size1 && s2)
			final_str[i] = s2[i - size1];
	}

	final_str[i] = '\0';
	return (final_str);
}
