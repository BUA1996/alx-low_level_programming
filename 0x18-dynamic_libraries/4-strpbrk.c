#include "main.h"
/**
 * _strpbrk - function that searches for a set of byte
 * @s: string byte
 * @accept: the string to be searched
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
		if (*s == accept[p])
		return (s);
		}
	s++;
	}
	return ('\0');
}
