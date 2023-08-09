#include <stdio.h>
/**
 *main -contains program functions
 *@argv: character pointer
 *@argc: interger count.
Return: 0 or 1
*/
int main (int argc, char argv[])
{
	int count;

	argc = argc;
	for (count = 0; count <= argv; count++)
	{
		printf("%s\n",argv[count]);
	}
	return (0);
}
