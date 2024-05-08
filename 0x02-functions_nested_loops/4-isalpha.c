#include "main.h"

/**
 * Description: _isalpha - Checks for alphabetic character.
 * @c: Variable containing character to be checked.
 * Return: 1 if c value is alphabet, 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	{
		return (0);
	}
}
