#include "main.h"

/**
 * Description: reverse_array - Reverses content of an array of integers.
 * @a: Array to be reversed
 * @n: Number of elements in array
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, j, number;
	/* Number to temporarily hold the element of a */

	j = 0;
	for (i = n - 1; i > j; i--)
	{
		number = a[i]; /* Assign value in a[j] to number */
		a[i] = a[j]; /* Assign the value in a[i] to a[j] */
		a[j] = number; /* Put the value of number into a[j] */
		j++;
	}
}
