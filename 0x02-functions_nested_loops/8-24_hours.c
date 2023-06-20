#include "main.h"
/**
 * jack_bauer - prints every minute of jack
 */
void jack_bauer(void)
{
	int p, q;

	p = 0;
	while (p < 24)
	{
		q = 0;
		while (q < 60)
		{
			_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
			_putchar(':');
			_putchar(q / 10 + '0');
			_putchar(q % 10 + '0');
			_putchar('\n');
			q++;
		}
		p++;
	}
}
