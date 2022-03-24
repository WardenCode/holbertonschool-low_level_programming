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
	int result = n;
	int holder = index;

	if (holder < 0)
		return (-1);

	if (index != 0)
		result = n >> index;

	return (result & 1);
}
