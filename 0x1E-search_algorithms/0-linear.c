#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integes using Linear
 *	Search Algorithm.
 * @array: Pointer to first element of array to search
 * @size: Size of array
 * @value: Value to search for
 *
 * Return: First index where value is located or -1 if value is not found.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	/* Return -1 if array is NULL */
	if (array == NULL || size == 0)
		return (-1);

	/* Progressively search each element of array */
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	/* Return -1 if value is not found in array */
	return (-1);
}
