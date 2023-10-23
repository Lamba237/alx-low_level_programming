#include "main.h"
#include <stdio.h>
/**
 * square_n - does calculation of the square numbers
 * @y: first int
 * @z: second int
 * Return: -1 or square of n
 */
int square_n(int y, int z)
{
	int square = z * z;

	if (square == y)
		return (z);
	if (square > y)
		return (-1);

	return (square_n(y, z + 1));
}
/**
 *_sqrt_recursion - prints the square root of a number
 *@n: number to be squared
 *
 *Return: returns -1 or square of n
 */
int _sqrt_recursion(int n)
{
	return (square_n(n, 0));
}
