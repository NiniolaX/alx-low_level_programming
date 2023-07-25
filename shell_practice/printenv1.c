#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
	int i = 0;

	printf("Address of env = %p\n", &env);
	printf("Address of environ = %p\n", &environ);

	while (env[i])
	{
		printf("%s\n", env[i]);
		i++;
	}

	return (0);
}
