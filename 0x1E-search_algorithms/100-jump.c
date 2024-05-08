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
	int jump_step = sqrt(size), i;
	int left = 0, right = left + jump_step;

	if (array == NULL || size == 0)
		return (-1);

	while (right < (int)size)
	{
		/* Compare value to element at left */
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (value == array[left])
			return (left);

		/* Jump to next block until block containing value is found */
		if (value > array[left] && value > array[right])
		{
			left = right;
			right += jump_step;
			continue;
		}
		else
			break;
	}

	/* Linear search subarray block */
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i <= right && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
