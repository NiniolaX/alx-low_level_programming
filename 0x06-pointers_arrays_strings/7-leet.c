#include "main.h"

/**
 * Description: leet - Encodes a string into 1337.
 * @s: String to be encoded
 * Return: Encoded string
 */

char *leet(char *s)
{
	/* Initialize loop counter for iteration through input string */
	int i;

	/* Initialize loop counter for iteration through leet letters */
	int j;

	/* Initialize string that holds leet letters */
	char leet_letters[] = "aAeEoOtTlL";

	/* Initialize string that holds leet numbers */
	char leet_numbers[] = "4433007711";

	/* Iterate through input str */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Iterate through leet letters to check equality with str char */
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			if (s[i] == leet_letters[j])
			{
				s[i] = leet_numbers[j];
				/* Break inner loop after encoding */
				break;
			}
		}
	}

	return (s);
}
