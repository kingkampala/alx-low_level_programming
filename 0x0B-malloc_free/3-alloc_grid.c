#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first integer
 * @height: second integer
 * Return: NULL on failure
 * If width or height is 0 or '-', return NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid, x, y;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			while (--x >= 0)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
