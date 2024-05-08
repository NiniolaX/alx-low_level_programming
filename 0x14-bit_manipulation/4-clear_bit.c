#include "main.h"

/**
 * clear_bit - Sets value of bit at a giveni ndex to 0
 * @n: Address of number
 * @index: Index
 * Return: 1 if success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = *n;
	unsigned int maxIndex = sizeof(n) * 8;

	/* Checks that valid address and in-range index is passed */
	if (n == NULL || index > maxIndex)
		return (-1);

	/* Checks if bit at index is 1 and turns it off */
	if (((temp >> index) & 1) == 1)
	{
		/* Bit at index is 1 */
		*n = *n ^ (1 << index);
	}

	return (1);
}
