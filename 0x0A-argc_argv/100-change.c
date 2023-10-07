#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints amounts for a coin
 *@argc: argument counts
 *@argv: holds value of arguments passed into our program
 *
 *Return: 1 for failure or 0 for success
 */
int main(int argc, char *argv[])
{
	int cent;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	while (cent > 0)
	{
		coins++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", coins);
	return (0);
}
