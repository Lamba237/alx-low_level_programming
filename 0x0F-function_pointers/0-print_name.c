#include "function_pointers.h"

/**
 *print_name - prints a name.
 *@name: first element
 *@f: function pointer.
 *
 *Description: Nothing else to describe.
 *Return: 0 as usual.
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
