#include <stdio.h>
/**
 * reset_to_98 - Write a function that takes a pointer
 * to an int as parameter and updates
 * the value it points to 98.
 *
 * @n: pointer value.
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int p;

	p = 402;
	n = &p;
	printf("n : %d\n", p);
	*n = 98;
	printf("n : %d\n", p);
	return (0);
}
