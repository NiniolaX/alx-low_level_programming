#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * Description: main - Checks if a random number is negative or non-negative.
 * Return: Returns 0 if success.
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d", n);
	if (n > 0)
	{
		printf(" is positive");
	} else if (n == 0)
	{
		printf(" is zero");
	} else
	{
		printf(" is negative");
	}
	return (0);
}
