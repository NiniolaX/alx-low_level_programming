#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates length of string
 * @s: Input string
 * Return: Length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int length;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of elements in s2 to be stored in new string
 * Return: Pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int i, j, s1len, s2len, strlength;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1len = _strlen(s1);
	s2len = _strlen(s2);
	strlength = s1len + s2len + 1;

	newstr = malloc(sizeof(char) * strlength);
	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1len; i++)
	{
		newstr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		if (j >= n && s2[j] + 1 == '\0')
		{
			break;
		}
		newstr[i + j] = s2[j];
	}

	newstr[strlength - 1] = '\0';

	return (newstr);
	free(newstr);
}
