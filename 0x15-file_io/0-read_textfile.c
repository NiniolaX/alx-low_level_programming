#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: Path to file
 * @leters: Number of letters to read and print from file
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == 0)
		return (0);

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == 0)
		return (0);

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == 0 || bytesWritten < bytesRead)
		return (0);

	close(fd);
	free(buffer);
	return (bytesWritten);
}
