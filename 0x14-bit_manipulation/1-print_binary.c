#include "main.h"
/**
 * print_binary - this function prints the
 * binary representative of a number
 * @n: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int binary[32];
	int c = 0;
	int d;

	if (n == 0)
	{
		printf("0");
	}
	while (n > 0)
	{
		binary[c++] = n & 1;
		n >>= 1;
	}
	for (d = c - 1; d >= 0; d--)
	{
		printf("%d", binary[d]);
	}
	printf("\n");
}
