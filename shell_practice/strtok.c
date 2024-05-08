#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *src = "Jesus loves me";
	char *delim = " ";
	char *str = malloc(sizeof(char) * strlen(src));
	char *token;

	strcpy(str, src);

	token = strtok(str, delim);

	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return(0);
}
