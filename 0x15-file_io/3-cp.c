#include "main.h"
#include <stdio.h>

#define BUFFSIZE 1024

/**
 * cp_file_to_file - Copies content of one file to another
 * @file_from: File whose content is copied
 * @file_to: File to which content is copied
 * Return: void
 */
void cp_file_to_file(const char *file_from, const char *file_to)
{
	int fd1, fd2, bytesRead, bytesWritten, cl1, cl2;
	char buffer[BUFFSIZE];

	fd1 = open(file_from, O_RDONLY);
	bytesRead = read(fd1, buffer, BUFFSIZE);
	/* Include condition for content greater than BUFFSIZE */
	if (fd1 == -1 || bytesRead == -1)
	{
		dprintf(2, "Error: Can't read file from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	bytesWritten = write(fd2, buffer, bytesRead);
	if (fd2 == -1 || bytesWritten == -1 || bytesWritten != bytesRead)
	{
		dprintf(2, "Error: Can'r write to %s\n", file_to);
		exit(99);
	}

	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd1);
		exit(100);
	}
	if (cl2 == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd2);
		exit(100);
	}
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
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	cp_file_to_file(argv[1], argv[2]);
	return (0);
}
