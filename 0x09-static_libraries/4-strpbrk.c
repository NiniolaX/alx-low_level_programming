#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: String containing characters to match
 * Return: Pointer to first occurence in s that matches any character in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
