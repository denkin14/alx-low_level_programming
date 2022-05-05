#include "main.h"
/**
 * free_grid - will allocate grid, make and free space
 * @grid: will take width of grid
 * @height: the height of grid
 * Return: our free grid
 */

void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
	{
		free(grid[d]);
	}

	free(grid);
}
