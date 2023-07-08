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

	/* Checks non-NULL pointer and in-range index is passed */
	if (n == NULL || index > maxIndex)
		return (-1);

	/* Checks what bit is at index and uses the right operator to off it */
	if (((temp >> index) & 1) == 1)
	{
		/* Bit is 1 */
		*n = *n ^ (1 << index);
	}
	if (((temp >> index) & 1) == 0)
	{
		/* Bit is 0 */
		*n = *n & (1 << index);
	}

	return (1);
}
