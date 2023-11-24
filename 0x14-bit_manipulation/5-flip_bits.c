#include "main.h"
/**
 * flip_bits - function that returfn number of bits
 * you would need to get from one number to another
 * @n: bit 1
 * @m: bit 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int v = n ^ m;
	int count = 0;

	while (v > 0)
	{
		if (v & 1)
		{
		count++;
		}
		v >>= 1;
	}
	return (count);
}
