#include "main.h"

/**
 * Description: rev_string - Reverses a string.
 * @s: String to be reversed.
 * Return: Void.
 */

void rev_string(char *s)
{
	int i, j;
	int length = 0;
	/* Declare a variable to temporarily hold the elements of the string */
	char c;

	/* Calculate length of string passed into function */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Reverse the string s */
	j = 0;
	for (i = length - 1; i > j; i--)/* length-1 removes last character 0 */
	{
		c = s[i]; /* Stores char in s[i] temporarily in c */
		s[i] = s[j]; /* Replaces char in s[i] with char in s[j] */
		s[j] = c; /* Replaces char in s[j] with char stored in c */
		j++;
	}
}
