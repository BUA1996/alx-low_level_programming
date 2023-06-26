#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: is the string to be reversed
 * Return: a reversed string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int q;

	while (s[counter] != '\n')
	counter++;
	for (q = 0; q < counter; q++)
	{
		counter--;
		rev = s[q];
		s[q] = s[counter];
		s[counter] = rev;
	}
}
