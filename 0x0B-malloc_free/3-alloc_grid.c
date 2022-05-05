#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int d, k;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (d = 0; d < height; d++)
	{
		gridout[d] = malloc(width * sizeof(int));
		if (gridout[d] == NULL)
		{
			for (d--; d >= 0; d--)
				free(gridout[d]);
			free(gridout);
			return (NULL);
		}
	}

	for (d = 0; d < height; d++)
		for (k = 0; k < width; k++)
			gridout[d][k] = 0;

	return (gridout);
}
