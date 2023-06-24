#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array of integers to be checked
 * @size: Number of elements in the array
 * @cmp: Pointer to function to be used to compare array elements.
 * Return: Index of the first element for which the cmp function does not
 *	return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	/* Return -1 if invalid array size is passed */
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		/* Return -1 if no element matches */
		if (i == size - 1 && cmp(array[i]) == 0)
		{
			return (-1);
		}
		/* Break out of look if element is found */
		if (cmp(array[i]) != 0)
		{
			break;
		}
	}
	return (i);
}
