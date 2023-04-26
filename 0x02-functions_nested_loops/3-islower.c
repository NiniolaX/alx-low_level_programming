#include "main.h"

/**
 * Description: _islower - checks for lowercase character.
 * @c - Variable to be checked.
 * Return: Returns 1 if lowercase and 0 if not.
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	} else
	{
		return (0);
	}
}
