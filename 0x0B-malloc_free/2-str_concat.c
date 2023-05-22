#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings, allocating the right amount of
 *	memory to store both.
 * @s1: first string
 * @s2: second string
 * Return: pointer to allocated memory space containing concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *p;

	/* Calculate the length of first string s1 */
	len1 = 0;
	while (s1[len1] != 0)
	{
		len1++;
	}
	/* Calculate the length of second string s2 */
	len2 = 0;
	while (s2[len2] != 0)
	{
		len2++;
	}

	/* Allocate memory for both concatenated string in heap */
	p = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	/* If memory allocation fails, return NULL */
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		/* Store string s1 in address at p */
		for (i = 0; i < len1; i++)
		{
			p[i] = s1[i];
		}
		/* Concatenate s2 at end of address at p */
		for (j = 0; j < len2 + 1; j++)
		{
			p[len1 + j] = s2[j];
		}
	}
	return (p);
	free(p);
}
