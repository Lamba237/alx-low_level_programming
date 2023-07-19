#include "main.h"

/**
 * print_last_digit - prints the last digit
 * of a number.
 *
 * @n: An interger number
 *
 * Return: always 0 (successful)
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		_putchar(-r + 48);
			return (-r);
	}
	else 
	{
		_putchar(r + 48);
		return (r);
	}
}
