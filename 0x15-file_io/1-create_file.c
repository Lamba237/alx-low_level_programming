#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: string to be displayed to the file
 *
 * Return: 1 on success and -1 if otherwise
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytesRead;
	ssize_t bytesWritten;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	bytesRead = read(fd, text_content, sizeof(text_content));
	if (bytesRead == -1)
		return (-1);
	bytesWritten = write(STDIN_FILENO, text_content, bytesRead);
	if (bytesWritten == -1)
		return (-1);
	free(text_content);
	close(fd);
	return (1);
}
