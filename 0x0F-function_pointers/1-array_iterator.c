#include "function_pointers.h"
/**
 *array_iterator - prints an array of int
 *@array: array to be printed
 *@size: size of array
 *@action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && array != NULL && size > 0)
	for (i = 0; i < size; i++)
	{
		if (i < size)
		action(array[i]);
	}
}
