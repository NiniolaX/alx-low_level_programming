#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 * @width: Width of array (i.e. numer of columns)
 * @height: Height of array (i.e. number of rows)
 * Return: Pointer to 2-dimensional array, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int row = height, col = width, i, j, k, l;
	int **array;

	if (row <= 0 || col <= 0)
	{
		return (NULL);
	}

	/**
	 * Allocates memory for row no of blocks/rows and returns pointer
	 * to first block/row
	 */
	array = (int **)malloc(row * sizeof(int *));

	/**
	 * Allocate memory for col no of integers in each row and returns
	 * pointer to first integer
	 */
	for (i = 0; i < row; i++)
	{
		array[i] = (int *)malloc(col * sizeof(int));
	}

	if (array == NULL || *array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < row; j++)
		{
			for (k = 0; k < col; k++)
			{
				array[j][k] = 0;
			}
		}
	}
	return (array);

	/* Free memory reserved for col no of elements in each row */
	for (l = 0; l < col; l++)
	{
		free(array[l]);
	}
	/* Free memory reserved for each row */
	free(array);
}
