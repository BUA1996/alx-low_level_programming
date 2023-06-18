#include <stdio.h>
/**
 * Main - entry of the function that prints all possible combinations
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
