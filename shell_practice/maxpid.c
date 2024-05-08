#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define BUFFSIZE 1024

int main(void)
{
	ssize_t fd, bytesRead;
	char buff[BUFFSIZE];

	fd = open("proc/sys/kernel/pid_max", O_RDONLY);
	if (fd == -1)
	{
		printf("Open failed\n");
		return (-1);
	}

	if ((bytesRead = read(fd, buff, BUFFSIZE)) == -1)
	{
		printf("Read failed\n");
		close(fd);
		return (-1);
	}
	buff[bytesRead] = '\0';

	printf("%s\n", buff);

	close(fd);
	return (0);
}
