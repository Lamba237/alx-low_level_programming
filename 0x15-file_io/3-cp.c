#include "main.h"
/**
 * error_check - read file and checks for error
 * @err: right error number
 * @filename: name of file
 */
void error_check(int err, char *filename)
{
	if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
		exit(98);
	}
	if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
}
/**
 * cpy - copies the content of a file to another
 * @file_from: source file
 * @file_to: destination file
 * Return: 1 on success and -1 otherwise
 */
void cpy(char *file_from, char *file_to)
{
	int fd, n_read, n_write, fd_write;
	char *buffer[1024];

	fd = open(file_from, O_RDONLY);
	if (fd < 0)
		error_check(98, file_from);

	fd_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_write < 0)
	{
		close(fd);
		error_check(99, file_to);
	}
	do {
		n_read = read(fd, buffer, 1024);
		if (n_read < 0)
			error_check(98, file_from);

		n_write = write(fd, buffer, n_read);
		if (n_write < n_read)
		error_check(99, file_to);
	}
		while (fd_write == 1024);
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		close(n_write);
		exit(100);
	}
}
/**
 * main - copies a content of a file to another
 * @ac: argument counts
 * @av: argument vector
 * Return: 0 for success, -1 for error
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file _from file_to\n");
		exit(97);
	}
	cpy(av[1], av[2]);
	return (0);
}
