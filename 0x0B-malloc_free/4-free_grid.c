#include "main.h"

/**
  * free_grid - Frees a 2 dimensional grid.
  * @grid: 2-dimensional grid to be freed.
  * @height: Height of the grid.
  *
  * Return: Always success.
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
