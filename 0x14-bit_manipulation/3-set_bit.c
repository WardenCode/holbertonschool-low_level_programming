#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: Pointer to the number.
 *
 * @index: Index of the byte to set the value.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = 1;
	unsigned int i = 0;

	if (index > (sizeof(n) * 8))
		return (-1);

	for (i = 0; i < index; i++)
		position *= 2;

	*n = *n | position;
	return (1);
}
