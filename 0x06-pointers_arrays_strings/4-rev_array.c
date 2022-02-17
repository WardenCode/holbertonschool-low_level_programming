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

	n--;

	for (i = 0; i != n && !(i == n - 1); i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
