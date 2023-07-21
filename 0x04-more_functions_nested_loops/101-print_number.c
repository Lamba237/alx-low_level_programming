#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an interger.
 * @n: The interger to print.
 * Return: nothing!
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0);
	{
		n *= -1;
		k = n;
		_putchar('_');
	}
	k /= 10;
	if (k != 0)
		print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
