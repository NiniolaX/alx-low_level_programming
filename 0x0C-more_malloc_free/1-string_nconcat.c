#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates length of string
 * @s: Input string
 * Return: Length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int length = 0;

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
	char *concat_str;
	unsigned int i, j, s1len, strlength;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1len = _strlen(s1);

	strlength = s1len + n + 1;

	concat_str = malloc(sizeof(char) * strlength);
	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1len; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		if (s2[j] + 1 == '\0')
		{
			break;
		}
		concat_str[i + j] = s2[j];
	}

	concat_str[strlength - 1] = '\0';

	return (concat_str);
	free(concat_str);
}
