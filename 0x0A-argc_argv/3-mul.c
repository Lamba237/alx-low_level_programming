#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the multiplication of two numbers
 *@argc: first number
 *@argv: argument vector
 *
 * Return: returns 1 if fail else 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
