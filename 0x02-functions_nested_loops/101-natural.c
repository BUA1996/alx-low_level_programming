#include <stdio.h>
/**
 * main - entry point of function
 * Return: always 0
 */
int main(void)
{
	int p, sum;

	for (p = 0; p < 1024; p++)
	{
		if ((p % 3) == 0)
			sum += p;
		else if ((p % 5) == 0)
			sum += p;
	}
	printf("%d\n", sum);
}
