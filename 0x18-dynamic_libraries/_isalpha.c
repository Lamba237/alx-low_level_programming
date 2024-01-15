#include "main.h"
/**
 *_isalpha - check if a string has alphabets
 *@c: checker interger
 *
 *Return: 1 if it's a character
 *else 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
			return (1);
	}
	return (0);
}
