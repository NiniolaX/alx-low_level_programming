#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char **environ;

/**
 * main - looks for files in the current path
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, -1 if fail
 */
int main(int argc, char **argv)
{
	struct stat fileStat;
	int i = 1;
	char *token, *delim = ":", *pathCpy;
	char *value = getenv("PATH");
	char *dir, *fullpath;

	if (argc < 2)
	{
		printf("Usage: %s filename...\n", argv[0]);
		return (0);
	}

	/* Tokenize PATH */
	pathCpy = strdup(value);
	token = strtok(pathCpy, delim);
	/* Search for commands in each directory in PATH */
	while (token)	
	{
		dir = strdup(token);
		/* Append backslash to dir path */
		strcat(dir, "/");
		/* Look for file in current PATH */
		while(argv[i])
		{
			fullpath = strdup(dir);
			strcat(fullpath, argv[i]);
			if (stat(fullpath, &fileStat) == 0)
			{
				printf("%s\n", fullpath);
			}
			free(fullpath);
			i++;
		}
		i = 1;
		token = strtok(NULL, delim);
		free(dir);
	}
	free(pathCpy);
	return (0);
}
