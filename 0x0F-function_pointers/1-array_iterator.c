#include "function_pointers.h"

/**
 * array_iterator - Executes function that gives a parameter on each
 *	element of an array
 * @array: Array
 * @size: Size of an array
 * @action: Pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
