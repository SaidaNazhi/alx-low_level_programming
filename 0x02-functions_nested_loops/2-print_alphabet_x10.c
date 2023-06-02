#include "main.h"

/**
 * ^print_alphabet_x10 - printS 10
 */
void print_alphabet_x10(void)
{
	char alpha;
	int a;

	a = 0;
	while (a < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		a++;
	}
}
