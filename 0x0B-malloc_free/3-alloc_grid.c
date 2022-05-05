#include "main.h"
/**
 * alloc_grid - will allocate a grid, make and free space
 * @width: will take width of grid
 * @height: height of the grid
 * Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
/*Declaring variables*/
int **grid;
int d, k;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int *) * height); /*malloc*/

if (grid == NULL)
{
return (NULL);
}

for (d = 0; d < height; d++)
{
grid[d] = malloc(sizeof(int) * width);
if (grid[d] == NULL)
{
for (d = d - 1; d >= 0; d--)
{
free(grid[d]);
}
free(grid);
return (NULL);
}
}
for (d = 0; k < width; d++)
grid[d][k] = 0;
return (grid);
}
