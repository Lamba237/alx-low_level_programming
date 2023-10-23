#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if an int is prime
 * @n: number to be checked
 * Return: returns 1 for prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1 ||(n != 2 && n % 2 == 0))
		return (0);
	else 
		return (1);
}
