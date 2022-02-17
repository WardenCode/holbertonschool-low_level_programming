#include "main.h"

/**
 * reverse_array - Modify an array
 *
 * @a: pointer to an array of numbers.
 *
 * @n: number of elements of array.
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, tmp, size;

	i = 0;
	size = n;
	n--;

	do {
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	} while (i < size / 2);
}
