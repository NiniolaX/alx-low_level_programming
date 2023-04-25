#include <stdio.h>

/**
 * Description: main - Prints the lowercase alphabet in reverse.
 * Return: 0 if succes.
 */

int main(void)
{
	char alpha, i;
	alpha = 'z';

	for (i = 26; i > 0 ; i--)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
