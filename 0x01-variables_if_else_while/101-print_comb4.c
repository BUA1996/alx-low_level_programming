#include <stdio.h>
/**
 * main - entry point of the function that prints combination of three digits.
 * Return: always 0
 */
int main(void)
{
	int p, q, r;

	for (p = 48; p < 58; p++)
	{
		for (q = 49; q < 58; q++)
		{
			for (r = 50; r < 58; r++)
			{
				if (r > q && q > p)
				{
					putchar(p);
					putchar(q);
					putchar(r);
					if (p != 55 || q != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
