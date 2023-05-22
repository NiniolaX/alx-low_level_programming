#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, containing
 *	a copy of the string giving as a parameter.
 * @str: string to be copied
 * Return: pointer to newly allocated space in memory.
 */

char *_strdup(char *str)
{
	int length, i;
	char *p;

	/* Return NULL if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	/* Calculate the length of a string */
	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	/* Create memory space in the heap for string */
	p = (char *)malloc(length * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		/* Copy string into heap */
		for (i = 0; i < length + 1; i++)
		{
			p[i] = str[i];
		}
	}

	return (p);
	free(p);
}
