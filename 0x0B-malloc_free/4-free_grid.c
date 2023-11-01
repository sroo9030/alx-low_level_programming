#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * free_grid - a function frees a grid previously created
  * @grid: an int type pointer
  * @height: an int type parameter
  */
void free_grid(int **grid, int height)
{
	int i, h = height;

	if (grid != NULL)
	{
		for (i = 0; i < h; i++)
			free(grid[i]);
	free(grid);
	}
}
