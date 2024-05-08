#include "main.h"

/**
 * _strstr - Locates a substring in a main string
 * @haystack: String to be checked
 * @needle: Smaller string to be searched for
 * Return: First occurence of the entire string needle in string haystack
 * or null pointer if needle is not present
 * or string haystack if needle points to a string with zero length
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *x = haystack;
		char *y = needle;

		while ((*x == *y) && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
