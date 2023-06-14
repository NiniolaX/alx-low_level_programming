#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @s: String
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

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
	int i, j = 0, k = 0, str_length, arg_length;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		str_length += _strlen(av[i]);
	}

	/* Add length of newline character and null terminator */
	str_length += ac + 1;

	/* Allocate memory space for string */
	str = malloc(str_length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	/* Assign each string's elements to new string */
	for (i = 0; i < ac; i++)
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
