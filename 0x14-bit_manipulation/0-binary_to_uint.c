#include "main.h"
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b: binary number to be converted
 * Return: unsigned int value after convention
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int interger = 0;
	int n;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
	for (n = strlen(b) - 1; n >= 0; n--)
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}
		interger += (b[n] - '0') * _pow_recursion(2, strlen(b) - n - 1);
	}
	}
	return (interger);
}
/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: first interger
 *@y: second interger
 *
 *Return: return x raised to the power of y else return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
