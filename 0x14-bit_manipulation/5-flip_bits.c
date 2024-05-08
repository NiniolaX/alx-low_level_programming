#include "main.h"

/**
 * flip_bits - Calculates the number of bits to be flipped to get from one
 *	number to another
 * @n: First number
 * @m: Second number
 * Return: Number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flips = 0, bitCompare;
	unsigned int maxIndex = sizeof(unsigned long int) * 8;

	for (i = 0; i < maxIndex; i++)
	{
		/* Compare each bit of both numbers at the same index */
		bitCompare = ((n >> i) ^ (m >> i)) & 1;

		/* Increment flips if bits are different */
		if (bitCompare != 0)
		{
			flips++;
		}
	}

	return (flips);
}
