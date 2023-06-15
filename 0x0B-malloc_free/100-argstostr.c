#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @s: String
 * Return: length of string
 */
size_t _strlen(char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * argstostr - Concatenates all arguments of program
 * @ac: Number of arguments passed to program
 * @av: Pointer to str of arguments of program
 * Return: Pointer to newly concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	size_t i, j = 0, k = 0, arg_length, str_length;
	size_t ac_size = (size_t)ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Calculate length of string, added 1 for newline character */
	for (i = 0; i < ac_size; i++)
	{
		str_length += _strlen(av[i]);
	}
	str_length += ac_size;

	/* Allocate memory space for string */
	str = malloc(1 + str_length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	/* Add each string's elements to new string */
	for (i = 0; i < ac_size; i++)
	{
		arg_length = _strlen(av[i]);
		for (j = 0; j < arg_length; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	/* Add terminating null character */
	str[str_length - 1] = '\0';

	return (str);
	free(str);
}
