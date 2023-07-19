#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 *
 * @n: Contains natural number
 *
 * Return: always 0 (successful)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = 0; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
		else if (n < 98)
		{
			for (n = 0; n > 98; n++)
			{
				printf("%d, ", n);
			}
		}
			printf("%d\n", n);
}
