#include "main.h"

/**
 * _puts_recursion - prints a string to std output
 * @s: string to be printed
 *
 * Return: returns a string s to std output
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
