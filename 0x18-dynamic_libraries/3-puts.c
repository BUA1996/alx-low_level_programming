#include "main.h"

/**
 * _puts - entry of function to print strings
 * Return: always 0
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
