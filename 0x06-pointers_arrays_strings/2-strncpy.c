#include "main.h"

/**
 * _strncopy - Copy a string to another
 *
 * @dest: string-base.
 *
 * @src: string to replce the string-base.
 *
 * @n: cuantity of letters to use of src.
 *
 * Return: Void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, size_dest;

	for (size_dest = 0; *(dest + size_dest) != '\0'; size_dest++)
		;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n && i < size_dest; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
