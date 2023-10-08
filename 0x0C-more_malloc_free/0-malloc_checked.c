#include "main.h"
/**
 *malloc_checked - allocates memory using malloc
 *@b: unsigned int
 *
 *Return: returns 98 for failure else pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
