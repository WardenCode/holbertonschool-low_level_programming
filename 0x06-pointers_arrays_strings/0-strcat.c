#include "main.h"

/**
 * _strcat - concatenates two string
 *
 * @dest: string-base.
 *
 * @src: string to add in the string-base.
 *
 * Return: Void
 */

char *_strcat(char *dest, char *src)
{
	int size_dest, iterator_src;

	for (size_dest = 0; *(dest + size_dest) != '\0'; size_dest++)
		;

	for (iterator_src = 0; *(src + iterator_src) != '\0'; iterator_src++)
	{
		*(dest + size_dest + iterator_src) = *(src + iterator_src);
	}

	*(dest + size_dest + iterator_src + 1) = '\0';

	return (dest);
}
