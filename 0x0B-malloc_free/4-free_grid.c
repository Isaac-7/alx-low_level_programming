#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d
 * @grid: pointer to  pointer
 * @height: height to grid
 *
 * Return: void
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
