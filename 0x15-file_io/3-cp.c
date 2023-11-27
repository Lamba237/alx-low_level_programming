#include "main.h"
/**
 * main - main function
 * @ac: argument count
 * @av: argument vector
 * Return: return 0 for success else
 * -1 for failure
 */
int main(int ac, char *av[])
{
	char buffer[1024];
	int fd_from, fd_to;
	ssize_t bytesRead, bytesWritten;
	char *file_from, *file_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error("Error: Can't write to", file_to, 99);

	while ((bytesRead = read(fd_from, buffer, 1024)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);
		if (bytesWritten == -1)
			print_error("Error: Can't write to", file_to, 99);
	}
	if (bytesRead == -1)
		print_error("Error: Can't read from file", file_from, 98);

	if (close(fd_from) == -1)
		print_error("Error: Can't close fd", file_from, 100);
	if (close(fd_to) == -1)
		print_error("Error: Can't close fd", file_to, 100);

	return (0);
}
