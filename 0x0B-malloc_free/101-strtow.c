#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - will free a 2 dimensional array
 * @grid: our multidimensional array of character
 * @height: height of the array
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - Will split string into words
 * @str: the string
 *
 * Return: The pointer of an array of integers
 */
char **strtow(char *str)
{
}
