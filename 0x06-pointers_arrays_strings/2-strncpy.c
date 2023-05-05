#include "main.h"

/**
 * Description: _strncpy - Copies a string with at most n bytes of source.
 * @src: Source string.
 * @dest: Destination string.
 * @n: Maximum number of bytes to be copies from source string.
 * Return: Destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
