#include <stdio.h>

/**
 * Description: main - Prints the lowercase alphabet in reverse.
 * Return: 0 if succes.
 */

int main(void)
{
	char alphabet = 'z';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
