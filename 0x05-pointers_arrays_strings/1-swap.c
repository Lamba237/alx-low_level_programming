#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: interger 1.
 * @b: interger 2.
 * Return: always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
