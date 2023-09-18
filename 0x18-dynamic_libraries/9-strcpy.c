#include "main.h"

/**
 * char *_strcpy - function for copying strings
 * @dest: copies to
 * @src: copy from (source)
 * Return: string copied
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int q = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for (; q < p; q++)
	{
		dest[q] = src[q];
	}
	dest[p] = '\0';
	return (dest);
}
