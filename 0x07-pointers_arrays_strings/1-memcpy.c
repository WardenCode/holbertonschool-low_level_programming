#include "main.h"

/**
 * _memcpy - Copies memory area.
 *
 * @dest: Destiny memory area.
 *
 * @src: Memory area source.
 *
 * @n: Bytes of the memory area to copy.
 *
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
