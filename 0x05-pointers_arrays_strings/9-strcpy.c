#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: Pointer to Array.
 *
 * @src: Number of elements.
 *
 * Return: Void
 */

char *_strcpy(char *dest, char *src)
{
	int size = 0;
	int i;

	while (*src != '\0')
	{
		size++;
		src++;
	}

	src -= size;

	for (i = 0; i <= size; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
