#include "main.h"
#include <stdio.h>

/**
 * Description: positive_or_negative - Checks the sign of a number.
 * Return: 0 if success.
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	} else if (i > 0)
	{
		printf("%d is positive\n", i);
	} else
	{
		printf("%d is equal to zero\n", i);
	}

	return;
}
