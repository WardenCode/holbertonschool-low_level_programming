#include "main.h"

/**
 * leet - Capitalize the string.
 *
 * @text: Pointer to string
 *
 * Return: The string with leet
 */

char *leet(char *text)
{
	int chars[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int leets[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i;
	int j;

	for (i = 0; text[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (text[i] == chars[j])
			{
				text[i] = leets[j];
			}
		}
	}
	return (text);
}
