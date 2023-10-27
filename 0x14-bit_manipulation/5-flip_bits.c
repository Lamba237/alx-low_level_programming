#include "main.h"
/**
 * flip_bits - eturns the number of bits you would need to flip
 * to get from one number to another.
 * @n: bit to be returned
 * @m: returned bit
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;
	int temp;

	temp = 0;
	for (x = sizeof(n) - 1; x >= 0; x--)
	{
		if (((n ^ m) >> x) & 1)
			temp++;
	}
	return (temp);
}
