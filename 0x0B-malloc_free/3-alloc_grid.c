#include "main.h"

/**
  * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
  * @width: Width of grid.
  * @height: Height of grid.
  *
  * Return: Pointer to 2D grid.
  *	    NULL - if function fails or if width or height is <= 0.
  */

int **alloc_grid(int width, int height)
{
	int **_grid;
	int hgt_i, wdt_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	_grid = malloc(sizeof(int *) * height);

	if (_grid == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		_grid[hgt_i] = malloc(sizeof(int) * width);

		if (_grid[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(_grid[hgt_i]);

			free(_grid);

			return (NULL);
		}
	}

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wdt_i = 0; wdt_i < width; wdt_i++)
			_grid[hgt_i][wdt_i] = 0;
	}

	return (_grid);
}
