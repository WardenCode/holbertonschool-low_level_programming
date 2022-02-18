#include "main.h"

/**
 * cap_string - Capitalize the string.
 *
 * @text: Pointer to string
 *
 * Return: The string in Capitalize
 */

char *cap_string(char *text)
{
	int chars[13] = {' ', '.', ',', '\n', ';', '(', ')', '!', '?',
		'"', '{', '}', '\t'};
	int i = 0;
	int j;

	while (text[i] != '\0')
	{
		j = 0;
		if (i == 0)
		{
			if (text[i] >= 'a' && text[i] <= 'z')
				text[i] -= 32;
			i++;
			continue;
		}

		while (j < 13)
		{
			if (text[i] == chars[j])
			{
				if (text[i + 1] >= 'a' && text[i + 1] <= 'z')
				{
					text[i + 1] -= 32;
					break;
				}
			}
			j++;
		}
		i++;
	}
	return (text);
}
