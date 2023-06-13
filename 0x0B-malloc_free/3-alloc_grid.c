#include "main.h"
#include <stdlib.h>

/**
 * free_array - Frees memory space allocated to array
 * @array: address to be freed
 * @row: number of pointers in address or number of rows in  array
 * Return: void
 */
void free_array(int **array, int row)
{
	int i;
	/* Free space allocated for elements in each row */
	for (i = 0; i < row; i++)
	{
		free(array[i]);
	}

	/* Free space allocated for each row or bloc */
	free(array);
}
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 * @width: Width of array (i.e. numer of columns)
 * @height: Height of array (i.e. number of rows)
 * Return: Pointer to 2-dimensional array, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int row = height, col = width, i, j;
	int **array;

	if (row <= 0 || col <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for row number of blocks/rows */
	array = (int **)malloc(row * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for col number of integers in each row */
	for (i = 0; i < row; i++)
	{
		array[i] = (int *)malloc(col * sizeof(int));
	}
	if (*array == NULL)
	{
		free_array(array, row);
		return (NULL);
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);

	free_array(array, row);
}
