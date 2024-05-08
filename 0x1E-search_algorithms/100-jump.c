#include "search_algos.h"
#include <math.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);

/**
 * jump_search - Searches for a value in a sorted array using Jump Search
 *	Algorithm
 * @array: Pointer to first element in array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_step = sqrt(size);
	int left = 0, right = left + jump_step;
	size_t block_size;

	if (array == NULL || size == 0)
		return (-1);

	while (right < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (value == array[left])
			return (left);

		if (value > array[right])
		{
			left = right;
			right = right + jump_step;
			continue;
		}

		printf("Value found between indexes [%d] and [%d]\n",
			left, right);
		block_size = (size_t)(right - left + 1);
		return (linear_search(array + left, block_size, value));
	}
	return (-1);
}


/**
 * linear_search - Searches for a value in an array of integes using Linear
 * Search Algorithm.
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
