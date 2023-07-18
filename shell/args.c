#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *buff = NULL, *buff_copy = NULL, *delim = " \"\n", *token = NULL;
	size_t size = 0, i = 0;
	int argc = 0;
	char **argv;

	printf("($) ");
	if (getline(&buff, &size, stdin) == -1)
		return (-1);

	/* Get the value of argc */
	buff_copy = strdup(buff);
	token = strtok(buff_copy, delim);
	while (token)
	{
		token = strtok(NULL, delim);
		argc++;
	}
	printf("%d\n", argc);

	/* Build the argv array */
	argv = malloc(sizeof(char *) * argc);
	token = strtok(buff, delim);
	while (token)
	{
		argv[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;
	i = 0;
	while (argv[i])
	{
		printf("argv[%lu]: %s\n", i, argv[i]);
		i++;
	}

	free(buff);

	return (0);
}
