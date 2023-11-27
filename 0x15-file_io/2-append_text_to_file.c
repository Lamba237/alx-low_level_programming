#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: string to add at end of file
 *
 * Return: 1 for success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	bytesWritten = write(fd, text_content, strlen(text_content));
	if (bytesWritten == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
