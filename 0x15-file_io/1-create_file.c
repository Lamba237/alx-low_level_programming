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
	ssize_t bytesWritten;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		/* write the text_content into the file */
	bytesWritten = write(fd, text_content, strlen(text_content));
	if (bytesWritten == -1)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);
}
