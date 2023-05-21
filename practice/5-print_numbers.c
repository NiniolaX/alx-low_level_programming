#include <stdio.h>

/**
 * Description: main - Prints all single digit numbers of base 10 starting from 0.
 * Return: Returns 0 if success.
 */

int main(void)
{
	int num = 0;
	int i;

	for (i = 0; i  < 10; i++)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
