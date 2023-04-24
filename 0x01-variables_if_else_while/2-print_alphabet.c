#include <stdio.h>
/**
 * Description: main - Prints the alphabet in lowercase.
 * Return: Returns 0 if success.
 */

int main()
{
	char alphabet = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
