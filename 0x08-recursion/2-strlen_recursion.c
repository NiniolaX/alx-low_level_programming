#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{

	/* Base case */
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
