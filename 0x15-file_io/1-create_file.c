#include "main.h"
/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: string tto write to file
 * Return: returns 1 for success else -1
 */
int create_file(const char *filename, char *text_content)
{
	mode_t mode = S_IRUSR | S_IWUSR;
	FILE *fd;
	ssize_t n_write;
	char *buffer;
	/* declaration and opening of file */
	buffer = text_content;
	if (filename == NULL)
	{
		return (-1);
	}
	fd = fopen(filename, "w");
	if (text_content == NULL)
	{
		fclose(fd);
		return (1);
	}
	if (fd == NULL)
		return (-1);
	/* writing into the file using */
	n_write = write(STDOUT_FILENO, buffer, sizeof(buffer));
	if (n_write <= 0)
	{
		fclose(fd);
		return (-1);
	}
	chmod(filename, mode);
	if (access(filename, F_OK) == 0)
	{
		fclose(fd);
		return (1);
	}
	fclose(fd);
	return (1);
}
