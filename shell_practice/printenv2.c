#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern char **environ;

int main(int ac, char **argv)
{
	int i = 0;
	while(environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}

	return (0);
}
