#include "variadic_functions.h"
/**
 *print_numbers - prints number
 *@separator: constant char
 *@n: int number
 *Return: returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	
	va_list pr;
	separator = separator;

	va_start(pr, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(pr, int));

			if (separator == NULL)
				return;
			else
				printf("%s", separator);
		}
	va_end(pr);
	printf("\n");
}
