#include "main.h"
/**
* print_sign - Entry point 
*
* @n: it is an interger number 
*
* Return: 1 and prints  +. returns 0 and prints 0. returns -1 and prints -.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
