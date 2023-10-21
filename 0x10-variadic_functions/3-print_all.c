#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - prints anything
 *@format: lists of arguments type
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	int n = 0;
	char *str, *sep = "";

	va_list ls;

	va_start(ls, format);
	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 's':
					str = va_arg(ls, char *);
					if (!str)
						printf("(nil)");
					printf("%s%s", sep, str);
					break;
				case 'c':
					printf("%s%c", sep, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ls, double));
					break;
				default:
					n++;
					continue;
			}
			sep = ", ";
			n++;
		}
	}
	printf("\n");
	va_end(ls);
}
