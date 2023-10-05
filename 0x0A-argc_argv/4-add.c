#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * num_check - checks if there are char among our digits digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int num_check(char *str)
{
	/*variable declaration*/
	unsigned int i;

	i = 0;
	while (i < strlen(str))
		/* loops through the whole string*/

	{
		if (!isdigit(str[i]))
			/*check if str there are digit*/
		{
			return (0);
		}

		i++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*variable declaration*/
	int i;
	int str_to_int;
	int sum = 0;

	i = 0;
	while (i < argc) /*loops through the whole array*/
	{
		if (num_check(argv[i]))

		{
			str_to_int = atoi(argv[i]); /*converts string to int*/
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
