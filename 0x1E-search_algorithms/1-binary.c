#include "search_algos.h"
#include <stdio.h>


void print_array(int *array, int left, int right);
/**
 * binary_search - Searches for a value in a sorted array of integers using
 *	Binary Search Algorithm.
 * @array: Pointer to first element of array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if value is not found.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int)size - 1, mid;

	/* Return -1 if array is NULL */
	if (array == NULL || size == 0)
		return (-1);

	/* Iteratively search array by 'dividing and conquering' */
	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (value == array[mid])
			return (mid);

		/* Search left subarray if mid is greater than value */
		if (value > array[mid])
			left = mid + 1;
		/* Search right subarray if mid is less than value */
		else
			right = mid - 1;
	}

	return (-1);
}


/**
 * print_array - Prints an array
 * @array: Pointer to first element in array
 * @left: Pointer to first element to print in array
 * @right: Pointer to last element to print in array
 *
 * Return: Void
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i >= left && i <= right; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}
