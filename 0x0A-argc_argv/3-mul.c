#include <stdio.h>
#include <stdlib.h>
/**
 *main - program to print two numbers.
 *@argc: argument count.
 *@argv: argument vector.
 *Return: returns 1 if argument < 1 and 0 if arg > 1.
**/
int main(int argc, char *argv[])
{
	int sum;
	/*atoi converts a string to an interger*/
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	while (b = '\0')
	{
		printf("Error\n");
		return (1);
	}
	sum = b * a;
	printf("%d\n", sum);
	return (0);
}
