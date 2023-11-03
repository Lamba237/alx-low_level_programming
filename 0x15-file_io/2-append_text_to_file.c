#include "main.h"
/**
 * append_text_to_file - appends text at end of a file
 * @filename: name of file to be created
 * @text_content: string to be written into the file
 * Return: return -1 for failure else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, l;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		l = 0;
		while (*(text_content + l) != '\0')
			l++;
		n_write = write(fd, text_content, l);
		if (n_write == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
