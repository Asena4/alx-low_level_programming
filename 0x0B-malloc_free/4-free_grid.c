#include "main.h"

/**
 * free_grid - Frees 2D array
 * @grid: Address of the 2D grid
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
