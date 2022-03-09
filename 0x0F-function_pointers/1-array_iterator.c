#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array.
 *
 * @array: numbers to iterate
 *
 * @size: size of the array
 *
 * @action: Call Back to execute
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	int holder = size;

	if (!array || !action || holder <= 0)
		return;

	for (; i < size; i++)
		action(array[i]);
}
