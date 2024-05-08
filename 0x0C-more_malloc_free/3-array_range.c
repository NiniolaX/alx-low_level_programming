#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: First element of array
 * @max: Last element of array
 * Return: Pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	unsigned int i, length;

	if (min > max)
	{
		return (NULL);
	}

	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
