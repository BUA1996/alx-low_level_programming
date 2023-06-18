#include <stdio.h>
/**
* main - entry point of the function to  print alphabets
* Return: always 0
*/
int main(void)
{
	char n;

	n = 'a';
	for (; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
