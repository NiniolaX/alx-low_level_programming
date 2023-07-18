#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t pid;

	printf("Before fork, I am one\n");

	pid = fork();
	if (pid == -1)
	{
		perror("Fork failed");
		return (1);
	}

	printf("After fork, I am two\n");

	return (0);
}
