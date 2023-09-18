#include "main.h"

/**
 * _isdigit - entry point of function to check for digits
 * @c: is digit to check
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
