#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: string tto write to file
 * Return: returns 1 for success else -1
 */
int create_file(const char *filename, char *text_content)
{
	/*mode_t mode = S_IRUSR | S_IWUSR;*/
	int fd;
	ssize_t n_write;
	/* declaration and opening of file */
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (text_content == NULL)
	{
		return (-1);
	}
	if (fd == -1)
		return (-1);
	/* writing into the file using */
	n_write = write(fd, text_content, strlen(text_content));
	if (n_write == -1)
	{
		close(fd);
		return (-1);
	}
	if (access(filename, F_OK) == 0)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
	}
	close(fd);
	return (1);
}