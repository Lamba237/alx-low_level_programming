#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - prints a name
 *@name: name to be printed
 *@f: function pointer
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
