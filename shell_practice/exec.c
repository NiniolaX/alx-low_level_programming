#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	int ret;
	char *argv[] = {"/bin/ls", "-l", NULL};
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("Fork failed\n");
		return (-1);
	}
	if (pid == 0)
	{
		ret = execve(argv[0], argv, NULL);
		if (ret == -1)
			perror("Execve failed");
	}
	else
	{
		wait(NULL);
		printf("Execve completed\n");
	}

	return (0);
}
