#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the corret function
 * @s: character
 * Return: returns pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	p_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && (ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
