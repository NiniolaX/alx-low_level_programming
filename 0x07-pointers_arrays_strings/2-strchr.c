#include "main.h"

/**
 * Description: _strchr - Locates a character in a string.
 * @c: Character to be located
 * @s: String to be checked.
 * Return: Pointer to first occurence of c or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
