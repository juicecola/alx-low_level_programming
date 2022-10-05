#include "main.h"

/**
 * free_grid - fxn that frees a 2d grid created by alloc_grid function
 * @grid: 2d grid
 * @height: length
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i > height; i++)
		free(grid[i]);
	free(grid);
}
