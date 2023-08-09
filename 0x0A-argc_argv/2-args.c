#include <stdio.h>
/**
 *main -contains program functions
 *@argv: character pointer
 *@argc: interger count.
Return: 0 or 1
*/
int main (int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
