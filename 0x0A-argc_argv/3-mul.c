#include <stdio.h>
#include <stdlib.h>
/**
 *main - program to print two numbers.
 *
 *Description: The program returns 0.
 *@argc: argument count.
 *@argv: argument vector.
 *
 *Returns: returns 1 if argument < 1 and 0 if arg > 1.
 */
int main(int argc, char *argv[])
{
	int sum;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	sum = a * b;
	printf("%d\n", sum);
	}

	return (0);
}
