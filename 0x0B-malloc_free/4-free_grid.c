#include "main.h"

/**
 * free_grid - free an alloc grid makeit by alloc_grid
 *
 * @grid: Double pointer to a grid
 *
 * @height: Height of the grid
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
