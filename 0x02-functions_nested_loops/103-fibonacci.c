#include <stdio.h>
/**
 * main - entry of the function that prints sum of even finobaci
 * Return: always 0 for succees
 */
int main(void)
{
	int n;
	unsigned long num1 = 1, num2 = 2, sum, next;

	for (n = 0; n <= 33; n++)
	{
		if (num1 < 4000000 && (num1 % 2) == 0)
		{
			sum += num1;
		}
		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}
	printf("%ld\n", sum);
	return (0);
}
