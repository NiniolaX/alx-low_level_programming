#include "main.h"

/**
 * Description: rot13 - Encodes a string using rot13.
 * @s: String to be encoded
 * Return: Pointer to encoded string
 */

char *rot13(char *s)
{
	/* Initialize loop counter for iteration through input string */
	int i;

	/*Initialize loop counter for iteration through encoding string */
	int j;

	/* Initialize string to hold rot13 letters */
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/* Iterate through input string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Iterate through the alphabets */
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];

				/* Break inner loop after encoding */
				break;
			}
		}
	}

	return (s);
}
