#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	struct stat fileStat;
	int i = 1;

	if (argc < 2)
	{
		printf("Usage: %s path_to_file...\n", argv[0]);
		return (-1);
	}
	while (argv[i])
	{
		if(stat(argv[i], &fileStat) == -1)
			printf("%s: NOT FOUND\n", argv[i]);
		else
			printf("%s: FOUND\n", argv[i]);
		i++;
	}
	return (0);
}
