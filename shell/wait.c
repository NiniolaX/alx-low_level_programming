#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("Fork failed\n");
		return (-1);
	}
	if (pid == 0)
	{
		printf("I am child process\n");
	}
	else
	{
		wait(NULL);
		sleep(30);
		printf("I am parent process\n");
	}

	return (0);
}
