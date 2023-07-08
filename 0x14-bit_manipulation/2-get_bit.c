#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number whose bit is at given index is to be returned
 * @index: Index
 * Return: Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/**
	 * Right shift number by index to move bit to index 0
	 * Apply bitwise & to result from (1) to check what bit is at index 0
	 */
	if (((n >> index) & 1) == 0)
	{
		return (0);
	}
	if (((n >> index) & 1) == 1)
	{
		return (1);
	}
	return (-1);
}
