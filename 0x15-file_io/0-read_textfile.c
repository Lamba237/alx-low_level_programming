#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to be read from
 *
 * Return: bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char *) * letters);
	bytesRead = read(fd, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(fd);
	return (bytesWritten);
}
