#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * **alloc_grid - function point to 2 dimensional array of integers
  * @width: an int type parameter
  * @height: an int type parameter
  *
  * Return: A pointer to array of integers, NULL if fail
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int w = width, h = height;
	int **grid;

	if (w <= 0 || h <= 0)
		return (NULL);

	grid = (int **)malloc(h * sizeof(int));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < h; i++)
	{
		grid[i] = (int *)malloc(w * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}

		for (j = 0; j < w; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
