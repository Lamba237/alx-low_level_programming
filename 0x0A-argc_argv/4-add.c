#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: hold record of number of arguments pased in our function
 * @argv: hold the value of arguments entered
 *
 * Return: return 1 for failure else 0 for success
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
