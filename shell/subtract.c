#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 5, b = 3, diff = a - b;
	pid_t pid, ppid;

	printf("Sum = %d\n", diff);

	pid = getpid();
	printf("My pid is %u\n", pid);

	ppid = getppid();
	printf("My ppid is %u\n", ppid);

	return (0);
}
