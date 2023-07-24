#include <stdio.h>
/**
 * reset_to_98 - Write a function that takes a 
 * pointer to an int as parameter 
 * and updates the value it points to to 98.
 *
 * @n: pointer variable.
 * Return: always 0.
 */
void reset_to_98(int *n)
{
	int p;

	p = 420;
	n = p;
	printf("n : %d\n", p);
	*n = 98;
	printf("n : %d", p);
	return (0);
}
