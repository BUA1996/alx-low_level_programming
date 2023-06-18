#include <stdio.h>
/**Mian - funtion that prints all alphabets in lower case except q and e
*Retrun: always 0
*/
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		if (n != 'q' && n != 'e')
			putchar(n);
			putchar('\n');
	return (0);
}
