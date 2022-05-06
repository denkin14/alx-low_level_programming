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
	char **panda;
	unsigned int d, height, m, k, b1;

	if (str == NULL || *str =='\0')
		return (NULL);
	for (d = height = 0; str[d] != '\0'; d++)
		if (str[d] != ' ' && (str[d + 1] == ' ' || str[d + 1] == '\0'))
			height++;
	panda = malloc(height + 1) * sizeof(char *);
	if (panda == NULL || height == 0)
	{
		free(panda);
		return (NULL);
	}
	for (m = b1 = 0; m < height; m++)
	{
		for (d = b1; str[d] != '\0'; d++)
		{
			if (str[d] == ' ')
				b1++;
			if (str[d] != ' ' && (str[d + 1] == ' ' || str[d + 1] == '\0'))
			{
				panda[m] = malloc((d - b1 + 2) * sizeof(char));
				if (panda[m] == NULL)
				{
					ch_free_grid(panda, m);
					return (NULL);
				}
				break;
			}
		}
		for (k = 0; b1 <= d; b1++, k++)
			panda[m][k] = str[b1];
		panda[m][k] = '\0';
	}
	panda[m] = NULL;
	return (panda);
}	
