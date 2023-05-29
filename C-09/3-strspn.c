#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to be searched
 * @accept: Set of characters to be searched for
 * Return: Length of initial segment mathing the set of characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int bytes = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
		}
			if (s[i] != accept[j])
			{
				return (bytes);
			}
	}

	return (bytes);
}
