#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t pid, ppid;

	pid = fork();
	if (pid == -1)
	{
		printf("Fork failed\n");
		return (1);
	}
	if (pid == 0)
	{
		sleep(5);
		printf("I am the child process\n");
	}
	else
	{
		ppid = getpid();
		printf("I am the parent with ppid %u\n", ppid);
	}
	return (0);
}
