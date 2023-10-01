#include "main.h"
/**
 * _puts_recursion - this function prints a string
 * @s: string to be printed
 *
 * Return: returns null else a string.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
		_putchar('\n');
	}
	return;
}
