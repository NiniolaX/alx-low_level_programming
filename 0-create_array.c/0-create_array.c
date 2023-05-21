#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it with a
 * 	specific char.
 * @size: size of array
 * @char: char to initialize array with
 * Return: pointer to array of characters
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			*(p + i) = c;
			i++;
		}
	}
	return (p);
}
