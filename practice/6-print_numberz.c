#include <stdio.h>

/**
 * Description: main - Prints all single digit numbers of base 10 starting from 0.
 * Return: 0 if success.
 */

int main(void)
{
	int num = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
