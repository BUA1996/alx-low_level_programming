#include "main.h"

/**
 * _memcpy - function that copies a memroy
 * @dest: memory pointer where the copied is stored
 * @src: memory to be copied
 * @n: number of bytes copied
 * Return: the copied text from memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int q = n;

	for (; p < q; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
