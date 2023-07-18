#include <stdio.h>

int main(int argc, char **argv, char **envp)
{
	unsigned int i;

	while (envp[i])
	{
		printf("%s\n", envp[i]);
		i++;
	}
	return (0);
}
