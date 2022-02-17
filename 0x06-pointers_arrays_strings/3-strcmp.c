#include "main.h"

/**
 * _strcmp - Compare a string with another
 *
 * @s1: string.
 *
 * @s2: string.
 *
 * Return: Void
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int result = 0;

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			result = *(s1 + i) - *(s2 + i);
			break;
		}
	}

	return (result);
}
