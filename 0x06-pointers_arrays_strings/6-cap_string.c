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
		/**
		 * Checks if string element is a whitespace and if next element is a lowecase
		 * letter
		 */
		if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '('
		|| s[i] == ')' || s[i] == '{' || s[i] == '}')
		&& (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		else if ((s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' || s[i] == '"') &&
			s[i + 2] >= 97 && s[i + 2] >= 122)
		{
			s[i + 2] = s[i + 2] - 32;
		}
	}

	return (s);
}
