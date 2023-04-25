#include <stdio.h>
/**
 * Description: main - Prints the alphabet in lowecase and hen in uppercase
 * Return: Returns 0 if success.
 */

int main(void)
{
	int lowercase, uppercase;
	int i;
	
	lowercase = 'a';
	uppercase = 'A';

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
