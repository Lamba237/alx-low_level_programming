#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints its own opcodes
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int byt, ind;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (ind = 0; ind < byt; ind++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
		if (ind == byt - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");
	return (0);
}
