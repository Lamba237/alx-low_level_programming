#include "main.h"
/**
 *_islower - check for lowercase letters
 *@c: interger that checks
 *
 *Return: 1 if any lowercase is found
 *else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
