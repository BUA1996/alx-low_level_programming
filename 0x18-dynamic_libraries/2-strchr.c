#include "main.h"

/**
 * _strchr - function that locates a chararcter in a string
 * @s: input string
 * @c: character to be located in the string
 * Return: null if not found
 */
char *_strchr(char *s, char c)
{
	int p = 0;

	for (; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
		{
			return (&s[p]);
		}
	}
	return (0);
}
