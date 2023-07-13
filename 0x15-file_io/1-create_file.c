#include "main.h"

/**
 * create_file - Creates a new file with rw------ permissions
 * @filename: Name of file to create
 * @text_content: String to write into file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, strLen = 0, bytesWritten;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[strLen] != '\0')
			strLen++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytesWritten = write(fd, text_content, strLen);

	if (fd == -1 || bytesWritten == -1 || bytesWritten != strLen)
		return (-1);

	close(fd);

	return (1);
}
