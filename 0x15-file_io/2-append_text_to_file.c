#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, strLen = 0, bytesAppended;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[strLen] != '\0')
			strLen++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
		bytesAppended = write(fd, text_content, strLen);
	if (fd == -1 || bytesAppended == -1)
		return (-1);

	close(fd);

	return (1);
}
