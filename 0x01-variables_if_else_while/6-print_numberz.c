#include <stdio.h>
/**
 * Description: main - Prints all single digit numbers of base 10
 * without 'char' variable type and using putchar() only.
 * Return: 0 if success.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
