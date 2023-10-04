#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments passed into it
 * @argc:argument count
 * @argv:argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argv = argv;
	if (argc > 0)
	{
		argc -= 1;
	printf("%d\n", argc);
	}
	return (0);
}
