#include "main.h"

/**
 * alloc_grid - creates a pointer to a 2 dimensional array of integers.
 *
 * @width: Width of the grid
 *
 * @height: Height of the grid
 *
 * Return: pointer to an dimensional array, NULL if failure or
 * (width height) are 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	/*
	 * i = quantity of pointers, j = thougth rows
	 * k = complete the matrix, l = free memory if malloc fail
	 */
	int i, j, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(void *));
	/* If malloc fails */
	if (!grid)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		/* If malloc fails */
		if (!grid[i])
		{
			for (l = 0; l < i; l++)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			grid[j][k] = 0;
	}
	return (grid);
}
