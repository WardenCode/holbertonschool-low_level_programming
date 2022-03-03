#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements
 *
 * @size: size of an element
 *
 * Return: hola
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, final_size = nmemb * size;
	char *array_zeros = NULL;
	/* void *final_pointer = NULL; */

	if (nmemb == 0 || size == 0)
		return (NULL);

	array_zeros = malloc(final_size);

	if (!array_zeros)
	{
		free(array_zeros);
		return (NULL);
	}

	for (i = 0; i < final_size; i++)
		array_zeros[i] = 0;

	return (/* final_pointer =  */array_zeros);
}
