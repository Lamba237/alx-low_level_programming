#include "variadic_functions.h"
/**
 *print_strings - prints string followed by new line
 *@separator: strings to be printed
 *@n: number of string passed to function
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *str;
	va_list ptr;

	va_start(ptr, n);
	str = separator;
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, const char *);
		if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);
		if (separator == NULL && i == n - 1)
		{
			return;
		}
		printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}

