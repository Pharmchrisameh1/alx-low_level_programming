#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2d array created by malloc
 * @grid: the array
 * @height: the number of arrays in the 2d array
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
