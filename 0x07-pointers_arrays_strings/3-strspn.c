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
	unsigned int counter = 0, i, j, flag;

	for (i = 0; s[i]; i++)
	{
		flag = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				counter++;
				break;
			}
		}
		if (flag == 0)
			return (counter);
	}
	return (counter);
}
