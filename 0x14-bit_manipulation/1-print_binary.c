#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int holder = 0;

	/*unsigned long int divider = 1;*/

		if (n > 1)
		{
			print_binary(n >> 1);
		}
		holder = (n & 1);
		_putchar((holder) + '0');
}
