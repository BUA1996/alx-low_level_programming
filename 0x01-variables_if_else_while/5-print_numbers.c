#include <stdio.h>
/**
 * main - entry point of the funtion that prints all numbers of base 10
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
