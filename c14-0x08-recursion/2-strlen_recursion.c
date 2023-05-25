#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string.
 * @s: String whose lengthis to be calculated.
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	/* Define base case */
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
