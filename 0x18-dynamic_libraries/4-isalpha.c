#include  "main.h"
/**
 * _isalpha - checks if the letter is an alphabet
 * @c: the character to be checked
 * Return: 1 if c, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
