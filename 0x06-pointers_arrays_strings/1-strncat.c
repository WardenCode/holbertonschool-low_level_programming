#include "main.h"

/**
 * _strncat - concatenates two string
 *
 * @dest: string-base.
 *
 * @src: string to add in the string-base.
 *
 * @n: cuantity of letters to use of src.
 *
 * Return: Void
 */

char *_strncat(char *dest, char *src, int n)
{
	int size_dest, size_src, iterator_src, tmp;

	for (size_dest = 0; *(dest + size_dest) != '\0'; size_dest++)
		;

	for (size_src = 0; *(src + size_src) != '\0'; size_src++)
		;

	tmp = (n > size_src) ? size_src : n;

	for (iterator_src = 0; iterator_src != tmp; iterator_src++)
	{
		*(dest + size_dest + iterator_src) = *(src + iterator_src);
	}

	*(dest + size_dest + iterator_src + 1) = '\0';

	return (dest);
}
