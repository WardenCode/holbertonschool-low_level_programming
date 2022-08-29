#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * the linear search algorithm
 *
 * @array: Pointer to the first element of the array to search in.
 *
 * @size: Numbert of elements in @array.
 *
 * @value: Is the value to search for.
 *
 * Return: 1 if the value is found it, -1 otherwise.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
