#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: is the char to be checked
 * Return: 1, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
