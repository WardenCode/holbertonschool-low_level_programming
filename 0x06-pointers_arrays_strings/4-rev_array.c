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
	int i, tmp;

	i = 0;
	n--;

	do {
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	} while (i != n && !(i == n - 1) && !(i > n));
}
