#include <stdio.h>
/**
 * Description: main - Prints all single digit numbers of base 10
 * without 'char' variable type and using putchar() only.
 * Return: 0 if success.
 */

int main()
{
	int i;

	for (i=0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
