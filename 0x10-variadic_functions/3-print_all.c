#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of the types of arguments
 */
void print_all(const char * const format, ...)
{
	char *str, *seperator = "";
	int i = 0;

	va_list value;

	va_start(value, format);
	if (format)
	{
		while (format[i])
		{
			switch(format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(value, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(value, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(value, double));
					break;
				case 's':
					str = va_arg(value, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", seperator, str);
					break;
				default:
					i++;
					continue;
			}
			seperator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(value);
}
