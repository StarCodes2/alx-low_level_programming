#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the memory spaces allocated for a 2D array
 * @grid: points to the array
 * @height: contains the number row in the grid or array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);

		free(grid);
	}
}
