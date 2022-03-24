#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 *
 * @n: Number to get the bit.
 *
 * @index: Index to search the byte.
 *
 * Return: The value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
