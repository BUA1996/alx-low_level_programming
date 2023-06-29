#include "main.h"

/**
 * _strcmp - function for comparing strngs
 * @s1: first string
 * @s2: second string
 * Return: input comparison
 */
int _strcmp(char *s1, char *s2)
{
	int p;

	p = 0;
	while (s1[p] != '\0' && s2[p] != '\0')
	{
		if (s1[p] != s2[p])
		{
			return (s1[p] - s2[p]);
		}
		p++;
	}
	return (0);
}
