#include "main.h"
#include "stdlib.h"

/**
 * create_array - Creates an array of characters and initializes it with a
 *	specific character
 * @size: Size of array
 * @c: Character to be used to initialize array
 * Return: Pointer to first character in array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	/** Return NULL if array size is zero */
	if (size == 0)
	{
		return (NULL);
	}

	/* Dynamically allocate memory for character array */
	array = (char *)malloc(size * sizeof(char));

	/* Return NULL if memory allocation fails */
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			*(array + i) = c;
			i++;
		}
	/* Return pointer to array if memory alloc is successful */
		return (array);
	}

	/* Free allocated memory after use */
	free(array);
}
