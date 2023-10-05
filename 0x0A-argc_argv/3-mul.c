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

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
