#include "3-calc.h"
#include <stdio.h>
/**
 *main -prints result of operation
 *@argv: argument vector
 *@argc: argument count
 *Return: 0
 */
int main(int_attribute_((_unused_)) argc, char *argv[])
{
	int n1, n2;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = aatoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
}
