#include <stdio.h>
/**
 * Description: main - Prints the alphabet in lowercase except q and e.
 * Return: 0 if success.
 */

int main(void)
{
	char alphabet = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
		putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
