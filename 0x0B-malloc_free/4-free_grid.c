#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a r-dim array of integers
 * @grid: the 2-dim array of integers to be freed
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
