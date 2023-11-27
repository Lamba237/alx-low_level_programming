#include "main.h"
/**
 * print_error - prints an error message to
 * standard POSIX
 * @message: to be displayed
 * @filename: name of file
 * @error_code: Error code
 * Return: void
 */
void print_error(char *message, char *filename, int error_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(error_code);
}
