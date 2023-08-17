#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - prints a function.
 *@array: first element
 *@size: second element
 *@action: pointer function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
