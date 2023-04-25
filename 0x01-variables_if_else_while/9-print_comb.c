#include <stdio.h>
/**
 * Description: main - Prints all possible combination of single numbers.
 * Return: 0 if success.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10 ; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
