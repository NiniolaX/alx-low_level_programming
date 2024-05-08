#include "main.h"

/**
 * _pow - Calculates value of integer x to power y
 * @x: base
 * @y: power
 * Return: Value of x to power y
 */
int _pow(int x, int y)
{
	/* Base case */
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow(x, y - 1));
	}
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 characters
 * Return: Converted number or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int digit, result = 0;
	int i, len = 0, basePow;

	if (b == NULL)
		return (0);

	/* Calculate number of digits in string */
	while (b[len] != '\0')
		len++;
	basePow = len - 1;

	for (i = 0; i < len; i++)
	{
		/* Convert str char to number and store in int var digit */
		digit = b[i] - '0';
		if (digit != 0 && digit != 1)
			return (0);
		/* Convert each digit to decimal equivalent */
		result += digit * _pow(2, basePow);
		basePow--;
	}

	return (result);
}
