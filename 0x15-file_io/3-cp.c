#include "main.h"
#include <stdio.h>

#define BUFFSIZE 1024
/**
 * close_file - Closes a file
 * fd - File descriptor of file to be closed
 * Return: void
 */
void close_file(int fd)
{
	int r = close(fd);

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", r);
		exit(100);
	}
}

/**
 * cp_file_to_file - Copies content of one file to another
 * @file_from: File whose content is copied
 * @file_to: File to which content is copied
 * Return: void
 */
void cp_file_to_file(const char *file_from, const char *file_to)
{
	int fd1, fd2, bytesRead, bytesWritten;
	char buffer[BUFFSIZE];

	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);

	while ((bytesRead = read(fd1, buffer, BUFFSIZE)) > 0)
	{
		if (fd1 == -1 || bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read file from file %s\n", file_from);
			exit(98);
		}
		if (buffer != NULL)
			bytesWritten = write(fd2, buffer, bytesRead);
		if (fd2 == -1 || bytesWritten == -1 || bytesWritten != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	close_file(fd1);
	close_file(fd2);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments passed to main
 * @argv: Array of strings of arguments passed to main
 * Return: 1 if success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file_to_file(argv[1], argv[2]);
	return (0);
}
