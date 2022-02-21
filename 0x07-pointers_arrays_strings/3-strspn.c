#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: String.
 *
 * @accept: character to match.
 *
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0, i, j = 0, size_of_sub = 0, flag;

	while (accept[j])
	{
		size_of_sub++;
		j++;
	}

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			flag = 0;
			if (s[i] == accept[j])
			{
				flag = 1;
				counter++;
				break;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	if (counter >= size_of_sub)
		return (counter);
	return (0);
}
