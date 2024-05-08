#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 5, b = 3, sum = a + b;
	pid_t pid, ppid, pid_max;

	printf("Sum = %d\n", sum);

	pid = getpid();
	printf("My pid is %u\n", pid);

	ppid = getppid();
	printf("My ppid is %u\n", ppid);

	return (0);
}
