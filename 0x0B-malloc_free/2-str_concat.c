#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @str: String passed as parameter
 * Return: Length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to newly concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, concat_str_len;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concat_str_len = len1 + len2 + 1;

	concat_str = malloc(concat_str_len * sizeof(char));

	/* Return NULL if memory allocation fails */
	if (concat_str == NULL)
	{
		return (NULL);
	}

	/* Concatenate both strings */
	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat_str[len1 + j] = s2[j];
	}

	return (concat_str);
	free(concat_str);
}
