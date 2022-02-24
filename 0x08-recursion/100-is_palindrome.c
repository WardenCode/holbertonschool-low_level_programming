#include "main.h"

/**
 * move_to_end - Move a pointer to the end of a string.
 *
 * @s: String.
 *
 * Return: New pointer to the end of a string.
 */

char *move_to_end(char *s)
{
	if (*s == '\0')
		return (s - 1);

	return (move_to_end(s + 1));
}

/**
 * check_palindrome - Detects if a string is palindrome.
 *
 * @start: Pointer to the start of a string.
 *
 * @end: Pointer to the end of a string.
 *
 * Return: 1 if is palindrome, 0 otherwise.
 */

int check_palindrome(char *start, char *end)
{
	if (start == end || start > end)
		return (1);

	if (*start == *end)
	{
		return (check_palindrome(start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Detects if a string is palindrome.
 *
 * @s: String
 *
 * Return: 1 if is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	char *end;

	if (*s == '\0')
		return (1);

	end = move_to_end(s);
	return (check_palindrome(s, end));
}
