#include "main.h"

/**
 * Description: _strncat - Concatenates two string using at most n bytes from
 * source string.
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes of source string.
 * Return: Destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	/* Caclculate length of dest string */
	while (dest[len] != '\0')
	{
		len++;
	}

	/* Insert src elements into dest, with n bytes at most */
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len + i] = src[i];
	}

	/* Insert null terminator at end of dest string */
	dest[len + i] = '\0';

	return (dest);
}
