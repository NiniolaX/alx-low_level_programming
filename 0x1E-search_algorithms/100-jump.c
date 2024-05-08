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
