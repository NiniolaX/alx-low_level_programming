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

	/* Allocate memory for row number of blocks/rows */
	array = (int **)malloc(row * sizeof(int *));

	/* Allocate memory for col number of integers in each row */
	for (i = 0; i < row; i++)
	{
		array[i] = (int *)malloc(col * sizeof(int));
	}

	if (array == NULL || *array == NULL)
	{
		for (i = 0; i < row; i++)
		{
			free(array[i]);
		}
		free(array);
		return (NULL);
	}
	for (j = 0; j < row; j++)
	{
		for (k = 0; k < col; k++)
		{
			array[j][k] = 0;
		}
	}
	return (array);

	/* Free memory reserved for col no of elements in each row */
	for (l = 0; l < row; l++)
	{
		free(array[l]);
	}
	/* Free memory reserved for each row */
	free(array);
}
