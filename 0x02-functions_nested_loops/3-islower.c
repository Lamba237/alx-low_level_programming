#include "main.h"

/**
 * _islower - shows 1 if input is lowercase
 * and 0 if otherwise
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowecase. 0 for the rest.
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
