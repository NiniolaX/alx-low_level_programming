#include <stdio.h>

/**
 * Description: main - Prints the alphabet in lowercase and then in uppercase.
 * Return: 0 if succes.
 */

int main(void)
{
	char lowercase = 'a', uppercase = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowercase);
		lowercase++;
	}

	for (i = 0; i < 26; i++)
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
