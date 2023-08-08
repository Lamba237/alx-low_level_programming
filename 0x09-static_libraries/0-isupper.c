#include "main.h"

/**
 * _isupper -  checks for uppercase character.
 * @c: it is a character
 * Return: 1 for upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
