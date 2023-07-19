#include "main.h"
/**
 * print_sign - Entry point 
 *
 * @n: it is a number 
 *
 * Return: 1 and prints  +. returns 0 and prints 0. returns -1 and prints -.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
