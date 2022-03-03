#include "main.h"

/**
 * array_range - Creates an array of integers.
 *
 * @min: min number to add in the array
 *
 * @max: max number to add in the array
 *
 * Return: The pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *new_array = NULL;
	int range, i, j = 0;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	new_array = malloc(range * sizeof(int));

	if (!new_array)
	{
		free(new_array);
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		new_array[j] = i;
		j++;
	}

	return (new_array);
}
