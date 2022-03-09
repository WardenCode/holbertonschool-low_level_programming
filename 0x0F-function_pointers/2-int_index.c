#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @array: An array with numbers (int)
 *
 * @size: number of elements of the array
 *
 * @cmp: function for do the search
 *
 * Return: The index of the first element that match or -1 otherwise.
 * if size is less than 0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result_actual_element = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result_actual_element = cmp(array[i]);

		if (result_actual_element != 0)
			return (i);
	}
	return (-1);
}
