#include "main.h"

/**
 * create_array - Creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: Size of the new array
 *
 * @c: Char to use in the new array
 *
 * Return: A new array with the same char, or NULL if size is 0
 * or 1 if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return(NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
