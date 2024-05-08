#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of bit at a given index to 1
 * @n: Pointer to number
 * @index: Index
 * Return: 1 if success, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maxIndex = sizeof(unsigned long int) * 8;

	/* Handles NULL n and out of range index values */
	if (n == NULL || index > maxIndex)
		return (-1);

	/* Sets bit at index to 1 and puts result back in n */
	*n = *n | (1 << index);

	return (1);
}
