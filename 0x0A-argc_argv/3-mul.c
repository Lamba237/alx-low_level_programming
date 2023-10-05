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
	int num1;
	int num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	result = num1 * num2;
	printf("%d\n", result);
	}
	return (0);
}
