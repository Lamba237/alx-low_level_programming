#include "main.h"
/**
 *_isupper - che for uppercase characters
 *@c:interger that checks if a character is
 *uppercase or not
 *
 * Return: returns 1 if uppercase else 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
