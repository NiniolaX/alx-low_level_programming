#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;

	printf("Number of arguments: %d\n", argc);
	for (i = 0; argv[i]; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}

	return (0);
}
