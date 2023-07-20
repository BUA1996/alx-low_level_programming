#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that Prints numbers
 * @separator: string to seperate the numbers
 * @n: number of integers passed
 * @...: ellipse
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list number;

	va_start(number, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(number);
}
