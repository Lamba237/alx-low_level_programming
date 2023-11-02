#include "main.h"
/**
 * read_textfile - reads a text file and prints to proxy
 * @filename: name of file
 * @letters: number of letters to read and print
 * Return: actual number the program can
 * print else 0 in the case of NULL
 * filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t *buffer;
	FILE *fd;
	size_t n_read, n_write;

	buffer = (size_t*)malloc(letters * sizeof(size_t));
	fd = fopen("filename", "r");
	if (fd == NULL)
		return (0);

	if (filename == NULL)
		return (0);	
	n_read = fread(buffer, sizeof(char), letters, fd);
	if (n_read <= 0)
	{
		fclose(fd);
		return (0);
	}
	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write <= 0)
	{
		fclose(fd);
		return (0);
	}
	fclose(fd);
	return (n_write);
}
