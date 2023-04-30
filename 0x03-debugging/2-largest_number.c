#include "main.h"

/**
 * Description: largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
	largest = a;
	}
	else if (b > a && b > c)
	{
	largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else if ((a > b && b > c) || (a > b && a > b && b > c))
	{
		largest = a;
	}
	else if ((b > a && a > c) || (b > a && b > c && a > c))
	{
		largest = b;
	}
	else if ((c > a && a > b) || (c > a && a > b && c > b))
	{
		largest = c;
	}

	return (largest);
}
