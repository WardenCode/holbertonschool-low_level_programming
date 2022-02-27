#include "main.h"

/**
 * rot13 - Encodes a string.
 *
 * @text: Pointer to string
 *
 * Return: The string encode with rot13
 */

char *rot13(char *text)
{
	char alpha[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'
		, 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v'
		, 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'
		, 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'
		, 'U', 'V', 'W', 'X', 'Y', 'Z'};

	char rot[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x'
		, 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'
		, 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V'
		, 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'
		, 'I', 'J', 'K', 'L', 'M'};

	int i;
	int j;

	for (i = 0; text[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (text[i] == alpha[j])
			{
				text[i] = rot[j];
				break;
			}
		}

	}

	return (text);
}
