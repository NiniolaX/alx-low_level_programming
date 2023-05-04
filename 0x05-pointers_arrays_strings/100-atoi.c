#include "main.h"

/**
 * Description: _atoi - Converts a string to an integer.
 * @s: Character string to be converted to an integer.
 * Return: 0 if success.
 */

int _atoi(char *s)
{
	int i;
	int length = 0;
	int sign = 1;
	unsigned int integer = 0;/* unsigned int to hold larger int values */

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		/* Checks and updates the sign before the digit */
		if (s[i] == '-')
		{
			sign = -sign;
		}

		if (s[i] >= 48 && s[i] <= 57)
		{
			/**
			 * Converts the current char to ASCII
			 * Updates value of current char
			 */
			integer = (s[i] - '0') + integer * 10;

			/**
			 * Checks if next char is a digit
			 * Breaks loop if it is not
			 */
			if (s[i + 1] < 48 || s[i + 1] > 57)
			{
				break;
			}
		}
	}

	return (sign * integer);
}
