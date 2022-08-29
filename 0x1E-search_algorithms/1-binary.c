#include "search_algos.h"

/**
 * print_array - Print the array with format in a range.
 *
 * @array: Array to print.
 *
 * @low: Index to begin the print.
 *
 * @high: Index to stop de print.
 *
 * Return: void.
 */

void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		printf("%d", array[low]);
		if (low != high)
			printf(", ");
	}
	putchar('\n');
}

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: Is a pointer to the first element of the array to search in.
 *
 * @size: Is the number of elements in @array.
 *
 * @value: Is the value to search for.
 *
 * Return: The value if is found it, otherwise -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx = 0, high = size - 1, low = 0;

	do {
		print_array(array, low, high);
		idx = ((high - low) / 2) + low;

		if (array[idx] == value)
			return (value);

		if (low == high)
			break;

		if (array[idx] < value)
			low = idx + 1;
		else
			high = idx - 1;

	} while (array[idx] != value);

	return (-1);
}
