#include "main.h"

/**
 * Description: string_toupper - Changes all lowercase letters of a string to
 * uppercase.
 * @s: String to be converted to uppercase
 * Return: Uppercase string.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		/* Checks that string element is a lowercase letter */
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
