#include "main.h"

/**
 * Description: _memcpy - Copies memory area.
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes to copy from Source.
 * Return: Pointer to dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char temp;

	for (i = 0; i < n; i++)
	{
		temp = src[i];
		src[i] = dest[i];
		dest[i] = temp;
	}

	return (dest);
}
