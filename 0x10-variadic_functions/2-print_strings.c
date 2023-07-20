#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that Prints strings given to it
 * @separator: separates the strings
 * @n: strings passed
 * @...: ellipse
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
