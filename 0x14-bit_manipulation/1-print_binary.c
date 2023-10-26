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

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n != 0)
	{
		binary |= (n & 1) << c;
		n >>= 1;
		c++;
	}
	while (c > 0)
	{
		_putchar('0' + ((binary >> --c) & 1));
	}
}
