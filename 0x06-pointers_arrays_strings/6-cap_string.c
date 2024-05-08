#include "main.h"

/**
 * Description: cap_string - Capitalizes first letter of words in a string.
 * @s: String to be capitalized.
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Checks if previous element is a special characher */
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
		|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
		|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '('
		|| s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'
		|| s[i - 1] == '"') && (s[i] >= 97 && s[i] <= 122))
		{
			/* Capitalizes current lowercase letter */
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
