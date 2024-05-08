#include "main.h"

/**
 * Description: _strlen - Returns the length of a string.
 * @s: String passed to the function.
 * Return: Length of string.
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
