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

	/* Compares each element of s1 with s2 */
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		/* Checks if s1 is equal to s2 */
		if (s1[i] == s2[i])
		{
			/* Returns 0 if s1 and s2 are equal till end of loop */
			if (s1[i + 1] == '\0' || s2[i + 1] == '\0')
			{
				return (0);
			}
		}
		/* Checks if s1 and s2 are unequal and breaks loop if true */
		else if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			break;
		}
	}

	return (s1[i] - s2[i]);
}
