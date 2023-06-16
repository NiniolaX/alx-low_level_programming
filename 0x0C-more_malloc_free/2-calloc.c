#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in array
 * @size: Size of each array element
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, ptr_size = nmemb * size;
	void *ptr;
	unsigned char *ptr_byte;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(ptr_size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr_byte = (unsigned char *)ptr;
	for (i = 0; i < ptr_size; i++)
	{
		ptr_byte[i] = 0;
	}

	return (ptr);
}
