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

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
			return (-l);
	}
	else 
	{
		_putchar(l + 48);
		return (l);
	}
}
