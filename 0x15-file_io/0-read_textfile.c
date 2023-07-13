#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: Path to file
 * @letters: Number of letters to read and print from file
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	bytesRead = read(fd, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (fd == -1 || bytesWritten == -1 || bytesRead == -1 ||
	bytesWritten != bytesRead)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (bytesWritten);
}
