#include <stdio.h>
/**
* Main - function that prints out numbers of base 10
* Return: always 0
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		putchar('\n');
	}
	return (0);
}
