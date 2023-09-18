#include "main.h"

/**
 * _strncpy - function for copying strings
 * @dest: destination for copying
 * @src: string being copied
 * @n: string legth
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p;

	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}
