#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: pointer to an int variable.
 *
 * @b: pointer to an int variable
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
