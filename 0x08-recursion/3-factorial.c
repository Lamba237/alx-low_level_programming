#include "main.h"
/**
 *factorial - prints the factorial of a given number
 *@n: factorial to be printed
 *
 *Return: 1 or -1 else return factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
