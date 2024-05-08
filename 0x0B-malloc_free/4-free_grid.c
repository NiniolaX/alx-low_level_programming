#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory allocated to grid or 2-dimensional array
 * @grid: Pointer to grid or 2-dimensional array
 * @height: Number of rows in array
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i;

	/* Free memory allocated for elements of rows in grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free memory allocated for pointer to rows */
	free(grid);
}
