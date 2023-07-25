#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t s = 10;
	char *lineptr = NULL;

	printf("$ ");
	getline(&lineptr, &s, stdin);

	printf("Name is %sBuffer size is %lu\n", lineptr, s);
	free(lineptr);

	return(0);
}
