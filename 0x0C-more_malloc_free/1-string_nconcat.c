#include "main.h"

/**
 * count_string - Get the size of a string.
 *
 * @string: base string.
 *
 * Return: pointer to a new space on memory, otherwise return NULL.
 */

unsigned int count_string(char *string)
{
	int i = 0;

	while (string[i])
		i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: base string.
 *
 * @s2: complementary string.
 *
 * @n: number of characters to take of s2.
 *
 * Return: pointer to a new space on memory, otherwise return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size_of_s1 = 0, size_of_s2 = 0, size_of_final_string;
	int holder = n;
	char *final_string;

	if (holder < 0)
		return (NULL);

	if (s1)
		size_of_s1 = count_string(s1);

	if (s2)
		size_of_s2 = count_string(s2);

	if (n >= size_of_s2)
		n = size_of_s2;

	size_of_final_string = size_of_s1 + n + 1;

	if (s1 && s2)
		final_string = malloc(size_of_final_string * sizeof(char));
	else
		final_string = malloc(0);

	if (!final_string)
	{
		free(final_string);
		return (NULL);
	}

	for (i = 0; i < (size_of_final_string - 1); i++)
	{
		if (i < size_of_s1)
			final_string[i] = s1[i];
		else if (i >= size_of_s1)
			final_string[i] = s2[i - size_of_s1];
	}
	final_string[i] = '\0';

	return (final_string);
}
