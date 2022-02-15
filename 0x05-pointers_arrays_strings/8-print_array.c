#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 *
 * @a: Pointer to Array.
 *
 * @n: Number of elements.
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	putchar('\n');
}
