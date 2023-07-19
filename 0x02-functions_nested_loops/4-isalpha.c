#include "main.h"

/**
 * _isalpha - returns 1 if a letter is lower case or upper case
 *
 *@c: The ASCII format
 *
Return: 1 for upper or lowercase letter. 0 if otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) 
	{
		return (1);
	}
	return (0);
}
