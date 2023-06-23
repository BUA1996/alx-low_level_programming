#include <stdio.h>
#include "main.h"

/**
 * print_numbers - entry point of the function
 * Return: always 0
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
