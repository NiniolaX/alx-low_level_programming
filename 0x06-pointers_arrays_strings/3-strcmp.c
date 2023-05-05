#include "main.h"

/**
 * Description: _strcmp - Compares two strings.
 * @s1: First string
 * @s2: Second string
 * Return: 0 if same, non-zero if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = s1[i] - s2[i];

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			break;
		}
		else if (s1[i] == s2[i])
		{
			if (s1[i + 1] == '\0' || s2[i + 1] == '\0')
			{
				return (0);
			}
		}
	}

	return (diff);
}
