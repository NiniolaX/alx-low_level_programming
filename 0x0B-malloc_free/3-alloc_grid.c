#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 * @width: Width of array
 * @height: Height of array
 * Return: pointer to 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for rows */
	array = (int **)malloc(height * sizeof(*array));

	/* Allocate memory for each column in each row */
	for (j = 0; j < width; j++)
	{
		array[j] = (int *)malloc(height * sizeof(int));
	}

	if (array == NULL || *array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
	}

	return (array);
	for (j = 0; j < width; j++)
	{
		free(array[j]);
	}
	free(array);
}
