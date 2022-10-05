#include "main.h"

/**
 * alloc_grid -  function that returns a pointer to a 2d array of integer
 * @width: width of the array
 * @height: length of the array
 * Return: width or height is 0 or negative, return NULL
 * else return pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
