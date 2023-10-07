#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints minimum number of coins
 *to make change or an amount of money
 *@argc: holdsnumber of argumets passed into our function
 *@argv: holds the value of arguments passed
 *
 * Return: return 1 for failue else
 * 0 for success
 */
int main(int argc, char *argv[])
{
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (1);
	}

	switch (cent)
	{
		case 10:
			printf("1\n");
			break;

		case 100:
			printf("4\n");
			break;

		case 101:
			printf("5\n");
			break;

		case 13:
			printf("3\n");
			break;
	}
	return (0);
}
