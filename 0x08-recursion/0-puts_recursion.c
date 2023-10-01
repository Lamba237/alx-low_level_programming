#include "main.h"

/**
 *_puts_recursion - function to print a string.
 *@s: string to be printed.
 *
 *Return: return a string else 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{	
		_putchar ('\n');
	}
	_putchar(*s);
}
