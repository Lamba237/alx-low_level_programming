#include "main.h"
/**
 * print_binary - this function prints the
 * binary representative of a number
 * @n: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int binary;
	int c = 0;
	int d;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		binary = n & 1;
		n >>= 1;
		c++;
	}
	for (d = c - 1; d >= 0; d--)
	{
		_putchar('0' + ((binary >> d) & 1));
	}
}
