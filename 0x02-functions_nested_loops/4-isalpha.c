#include "main.h"

/**
 * _isalpha - returns 1 if input is c
 * letter another cases, show 0
 *
 *@c: The ASCII format
 *
Return: 1 for letters. 0 if otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
