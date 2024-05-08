#include "main.h"

/**
 * Description: swap_int - Swaps the values of two integers.
 * @a: First integer
 * @b: Second integer
 * Return: Void.
 */

void swap_int(int *a, int *b)
{
	/* Creating a variable holder */
	int holder;

	/*Store the value of a into var holder */
	holder = *a;
	/* Put the value of b into a */
	*a = *b;
	/* Put the value in holder (value of a) into b */
	*b = holder;
}
