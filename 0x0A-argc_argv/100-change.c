#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimum number of coins.
 *@argc: counts.
 *@argv: vectors.
 *Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int amount, cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	cent = 0;
	if (amount > 25)
	{
		while (amount >= 25)
			amount -= 25, cent++;
	}
	if (amount > 10 && amount < 25)
	{
		while (amount >= 10)
			amount -= 10, cent++;
	}
	if (amount > 5 && amount < 10)
	{
		while (amount >= 5)
			amount -= 5, cent++;
	}
	if (amount > 2 && amount < 5)
	{
		while (amount >= 2)
			amount -= 2, cent++;
	}
	if (amount == 1 || amount == 2 || amount == 5 || amount == 10 || amount == 25)
	{
		cent++;
	}
	else if (argc < 0)
	{
		printf("0\n");
	}
	printf("%d\n", cent);
	return (0);
}
