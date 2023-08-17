#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - prints a name.
 *@name: first element
 *@f: function pointer
 *Description: Nothing else to describe
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
