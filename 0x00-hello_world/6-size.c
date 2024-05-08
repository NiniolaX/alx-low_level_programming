#include <stdio.h>
/**
 * Description: main - prints size of various data types on computer.
 * Return: 0 if successful
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;
	char str[] = "byte(s)";

	printf("Size of a char: %lu %s\n", (unsigned long)sizeof(c), str);
	printf("Size of an int: %lu %s\n", (unsigned long)sizeof(i), str);
	printf("Size of a long int: %lu %s\n", (unsigned long)sizeof(l), str);
	printf("Size of a long long int: %lu %s\n", (unsigned long)sizeof(ll), str);
	printf("Size of a float: %lu %s\n", (unsigned long)sizeof(f), str);

	return (0);
}
