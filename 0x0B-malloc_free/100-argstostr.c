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
	int i, j, strlength;
	char* str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Calculate length of each argument to string */
	for (i = 0; i < ac; i++)
	{
		strlength += _strlen(av[i]);
	}

	str = malloc(1 + ac + strlength * sizeof(char));

	/* Allocate each argument to new string */
	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			str[j] = av[i][j];
			j++;
		}
		str[j++] += '\n';
	}

	return (str);
	free(str);
}
