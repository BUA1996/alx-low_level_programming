#include "main.h"

/**
 * _memset - function for filling a memory
 * @s: memory address that starts the function
 * @b: value to be filled in the memory
 * @n: bytes to filled
 * Return: the array filled with n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (; n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
