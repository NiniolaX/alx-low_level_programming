#include "main.h"

/**
 * Description: _memset - fills memory with a constant byte.
 * @s: String to be filled
 * @n: number of constant byte to be filled
 * @b: constant byte to filled into string
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
